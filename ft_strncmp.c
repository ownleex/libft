/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:47:09 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/02 23:02:40 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	n = n - 1;
	while (i < n && (str1[i] != '\0' && str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	return (str1[i] - str2[i]);
}

/*
int	main(void)
{
	char	src[] = "cebi est un test";
	char	dest[] = "ceci est un test";
	size_t	n = '7';

	printf("%d\n", ft_strncmp(src, dest, n));
	printf("%d\n", strncmp(src, dest, n));
	return (0);
}
*/
