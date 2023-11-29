/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:17:41 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/29 14:38:51 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**ft_free(char **s2, int word)
{
	while (word > 0)
	{
		word--;
		free(s2[word]);
	}
	free(s2);
	return (NULL);
}

static char	*ft_putword(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	wordposit;
	int	word_len;

	i = 0;
	wordposit = 0;
	word_len = 0;
	while (wordposit < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[wordposit] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!s2[wordposit])
			return (ft_free(s2, wordposit));
		ft_putword(s2[wordposit], s, i, word_len);
		word_len = 0;
		wordposit++;
	}
	s2[wordposit] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_words;

	if (!s)
		return (NULL);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!s2)
		return (NULL);
	s2 = ft_split_words(s, c, s2, num_words);
	return (s2);
}

/*
int	main(void)
{
	char	**res;
	int		i;

	i = 0;
	res = ft_split("la chaine de   caractere a     spliter", ' ');
	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
*/
