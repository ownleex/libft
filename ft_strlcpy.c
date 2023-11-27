/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:56:42 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/27 17:09:14 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t
	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/*
int	main(void)
{
	char	src[] = "bla bla bla";
	char	dst[255];

	printf("Source : %s\n", src);
	printf("Valeur renvoyee par ft_strlcpy : %ld\n", ft_strlcpy(dst, src, 9));
	printf("Destination : %s\n", dst);
	return (0);
}
*/
