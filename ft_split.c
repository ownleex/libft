/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:17:41 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/12 18:18:40 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int count_words(const char *str, char c)
{
    int i;
    int count;

    i = 0;
    count = 0;

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
    int i;

    if (start == finish)
	return NULL;

    word = (char *)malloc(sizeof(char) * (finish - start + 1));
    if (!word)
	return (NULL);

    i = 0;
    while (start < finish)
    {
	word[i] = str[start];
	i++;
	start++;
    }
    word[i] = '\0';

    return word;
}

char **ft_split(char const *s, char c)
{
    char **result;
    int i;
    int j;
    int word_start;

    if (!s)
	return (NULL);

    result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
    if (!result)
	return (NULL);

    i = 0;
    j = 0;
    word_start = -1;

    while (s[i])
    {
	if (s[i] != c && word_start < 0)
	    word_start = i;
	else if ((s[i] == c || s[i + 1] == '\0') && word_start >= 0)
	{
	    char *word = word_dup(s, word_start, (s[i] == c) ? i : i + 1);
	    if (word)
	    {
		result[j] = word;
		j++;
	    }
	    word_start = -1;
	}
	i++;
    }
    result[j] = NULL;

    return result;
}
