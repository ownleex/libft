/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 15:08:38 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/10 23:19:02 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	len_n;
	size_t	i;
	size_t	j;

	if (ft_strlen(str2) == 0)
		return ((char *) str1);
	len_n = ft_strlen(str2);
	i = 0;
	while (str1[i] && i < n)
	{
		j = 0;
		while (str1[i + j] && str1[i + j] == str2[j] && i + j < n)
			j++;
		if (j == len_n)
			return ((char *) str1 + i);
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
    const char *haystack = "Hello, World!";
    const char *needle = "World";
    size_t len = 40;

    char *result = ft_strnstr(haystack, needle, len);
    if (result != NULL)
    {
	printf("Cherche '%s' dans '%s' avec les %zu characters.\n", \
		needle, haystack, len);
	printf("Resultat: %s\n", result);
    }
    else
    {
	printf("Did not find '%s' in '%s' within the first %zu characters.\n", \
		needle, haystack, len);
    }

    return 0;
}
*/