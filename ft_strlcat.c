/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:56:28 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/10 23:19:51 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	res_d;
	size_t	res_s;

	i = ft_strlen(dst);
	j = 0;
	res_d = ft_strlen(dst);
	res_s = ft_strlen(src);
	if (dstsize < 1)
		return (res_s + dstsize);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize < res_d)
		return (res_s + dstsize);
	else
		return (res_d + res_s);
}

/*
int	main(void)
{
	char dest[50] = "Hello, ";
	char src[] = "world!";
	unsigned int size = 50;
	unsigned int result;

	printf("Before ft_strlcat: %s\n", dest);
	result = ft_strlcat(dest, src, size);
	printf("After ft_strlcat: %s\n", dest);
	printf("Returned value: %u\n", result);
	return (0);
}
*/
