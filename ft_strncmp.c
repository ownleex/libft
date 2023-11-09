/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:47:09 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/09 14:07:32 by ayarmaya         ###   ########.fr       */
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
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
		{
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		}
		i++;
	}
	if (i < n)
	{
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}

int	main(void)
{
	printf("%d\n", ft_strncmp("test\200", "test\0", 7));
	printf("%d\n", strncmp("test\200", "test\0", 7));
	printf("%d\n", ft_strncmp("test", "tsst", 7));
	printf("%d\n", strncmp("test", "tsst", 7));
	return (0);
}
