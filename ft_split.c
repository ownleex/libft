/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:17:41 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/12 18:25:36 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char **ft_split(char const *s, char c)
{
    int i;
    int j;
    int n;
    char **tab;

    i = 0;
    j = 0;
    n = 0;

    /* Compte le nombre de mots */
    while (s[i])
    {
        if (s[i] != c)
        {
            n++;
            while (s[i] != c && s[i])
                i++;
        }
        else
            i++;
    }

    /* Alloue le tableau de mots */
    tab = malloc(sizeof(char *) * (n + 1));
    if (!tab)
        return (NULL);

    /* Parcourt la chaîne et copie les mots dans le tableau */
    while (n--)
    {
        while (s[j] == c)
            j++;
        tab[n] = malloc(sizeof(char) * (j - i + 2));
        if (!tab[n])
        {
            while (n < i)
                free(tab[++n]);
            free(tab);
            return (NULL);
        }
        memcpy(tab[n], &s[j], j - i + 1);
        tab[n][j - i + 1] = '\0';
        j = i + 1;
        i = j;
    }
    tab[n] = NULL;

    return (tab);
}
