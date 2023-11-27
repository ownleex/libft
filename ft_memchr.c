/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:55:09 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/27 23:19:37 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
int     main(void)
{
        const char      s[] = "bonjour";
        int     c = 'j';
        size_t  n = 5;
        void    *result;

        result = ft_memchr(s, c, n);
        if (result != NULL)
                printf("Octet trouvé : %c\n", *(char *)result);
        else
                printf("Absent dans les %ld premiers caractères.\n", n);

        return (0);
}
*/
