/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 23:16:28 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/02 23:31:25 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s + i) == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	s[] = "boujour";
	int	c = 'j';
	size_t	n = 5;
	
	printf("%p\n", ft_memchr(s, c, n));
	printf("%p\n", memchr(s, c, n));
	return (0);
}
*/
