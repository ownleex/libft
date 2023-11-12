/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:17:41 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/12 18:49:40 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_count_words(char const *s, char c)
{
    int count = 0;
    int sub_str = 0;

    while (*s != '\0')
    {
        if (sub_str == 1 && *s == c)
            sub_str = 0;
        if (sub_str == 0 && *s != c)
        {
            sub_str = 1;
            count++;
        }
        s++;
    }
    return (count);
}

char    *ft_malloc_word(char const *s, char c)
{
    char    *word;
    int     i = 0;

    while (s[i] != '\0' && s[i] != c)
        i++;
    word = (char *)malloc(sizeof(char) * (i + 1));
    i = 0;
    while (s[i] != '\0' && s[i] != c)
    {
        word[i] = s[i];
        i++;
    }
    word[i] = '\0';
    return (word);
}

char    **ft_split(char const *s, char c)
{
    char    **tab;
    int     j = 0;
    int     words;

    while (*s == c)
        s++;
    if (*s == '\0')
    {
        tab = (char **)malloc(sizeof(char *));
        tab[0] = NULL;
        return (tab);
    }
    words = ft_count_words(s, c);
    tab = (char **)malloc(sizeof(char *) * (words + 1));
    while (*s != '\0')
    {
        if (*s != c)
        {
            tab[j] = ft_malloc_word(s, c);
            j++;
            while (*s != '\0' && *s != c)
                s++;
        }
        else
            s++;
    }
    tab[j] = NULL;
    return (tab);
}
