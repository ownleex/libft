/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:56:28 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/27 19:10:13 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_s;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	len_s = ft_strlen(src);
	if (i < dstsize)
	{
		j = 0;
		while (src[j] && i + j < dstsize - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
	}
	return (i + len_s);
}

/*
int	main(void)
{
	char dest[7] = "Hello, ";
	char src[] = "world!";
	unsigned int size = 50;
	unsigned int result;

	printf("Avant ft_strlcat : %s\n", dest);
	result = ft_strlcat(dest, src, size);
	printf("Apres ft_strlcat : %s\n", dest);
	printf("Valeur renvoyee : %u\n", result);
	return (0);
}
*/
