/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:56:28 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/27 18:29:27 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len_s;
	size_t	total_len;

	i = ft_strlen(dst);
	j = 0;
	len_s = ft_strlen(src);
	if (dstsize == 0)
		return (len_s);
	while (src[j] && i < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	if (i > dstsize)
		total_len = len_s + dstsize;
	else
		total_len = len_s + i;
	return (total_len);
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
