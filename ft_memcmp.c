/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:55:21 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/20 16:06:08 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	i = 0;
	while (i < n && *(s1 + i) == *(s2 + i))
		i++;
	if (i < n)
		return (*(s1 + i) - *(s2 + i));
	return (0);
}

/*
int	main(void)
{
	const char	s1[] = "bonjour";
	const char	s2[] = "bonnour";
	size_t		n = 5;

	printf("%d\n", ft_memcmp(s1, s2, n));
	return (0);
}
*/
