/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 01:56:48 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/12 18:03:24 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int i = 0;
	int count = 0;

	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] && (str[i] != c))
			i++;
	}
	return count;
}

static char *word_dup(const char *str, int start, int finish)
{
	char *word;
	int i = 0;

	if (start == finish)
		return NULL;

	word = (char *)malloc(sizeof(char) * (finish - start + 1));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return word;
}

char **ft_split(char const *s, char c)
{
	char **result;
	int i = 0;
	int j = 0;
	int word_start = -1;

	if (!s || !(result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);

	while (s[i])
	{
		if (s[i] != c && word_start < 0)
			word_start = i;
		else if ((s[i] == c || s[i + 1] == '\0') && word_start >= 0)
		{
			char *word = word_dup(s, word_start, (s[i] == c) ? i : i + 1);
			if (word)
				result[j++] = word;
			word_start = -1;
		}
		i++;
	}
	result[j] = NULL;
	return result;
}

/*
int	main(void)
{
	char	**result;
	int		i = 0;

	result = ft_split("   lorem   ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
	return (0);
}
*/
