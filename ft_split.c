/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:17:41 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/28 01:35:41 by ayarmaya         ###   ########.fr       */
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

static char	**ft_split_words(char const *s, char c, char **result, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		result[word] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!result[word])
			return (NULL);
		ft_putword(result[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	result[word] = 0;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char			**result;
	unsigned int	num_words;

	if (!s)
		return (NULL);
	num_words = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (!result)
		return (NULL);
	result = ft_split_words(s, c, result, num_words);
	return (result);
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
