/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:56:28 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/20 16:53:47 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	i = ft_strlen(dst);
	j = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if (dstsize < 1)
		return (len_s + dstsize);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (dstsize < len_d)
		return (len_s + dstsize);
	else
		return (len_d + len_s);
}

/*
int	main(void)
{
	char dest[7] = "Hello, ";
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
