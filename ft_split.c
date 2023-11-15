/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:17:41 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/15 17:08:03 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;
	size_t	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	word_len;
	size_t	word_index;

	if (!s || !(arr = (char **)malloc(sizeof(char *) * (ft_wordcount(s, c) + 1))))
		return (NULL);
	word_index = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_len = 0;
			while (s[word_len] && s[word_len] != c)
				word_len++;
			arr[word_index] = (char *)malloc(sizeof(char) * (word_len + 1));
			if (!arr[word_index])
			{
				while (word_index > 0)
					free(arr[--word_index]);
				free(arr);
				return (NULL);
			}
			ft_strlcpy(arr[word_index], s, word_len + 1);
			s += word_len;
			word_index++;
		}
		else
			s++;
	}
	arr[word_index] = (NULL);
	return (arr);
}

/*
int	main(void)
{
	char	**res;
	int		i;

	i = 0;
	res = ft_split("   lorem   ipsum dolor sit amet el Suspendisse", ' ');
	while (res[i] != NULL)
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
*/
