/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:47:09 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/09 13:53:56 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (i < n && (str1[i] != '\0' && str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
		{
			return (str1[i] - str2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return (str1[i] - str2[i]);
	}
	return (0);
}

int	main(void)
{
	char	src[] = "test\200";
	char	dest[] = "test\0";
	size_t	n = '2';

	printf("%d\n", ft_strncmp(src, dest, 1));
	printf("%d\n", strncmp(src, dest, 1));
	return (0);
}
