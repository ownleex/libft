/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:39:43 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/15 18:50:24 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *, void (*f)(unsigned int, char*));
{
	int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(f*)(i, &s[i]);
		i++;
	}
}

/*
int     main(void)
{
	char    str[] = "Hello World!";
	void    (*f)(unsigned int, char*);

	f = &ft_putchar;
	ft_striteri(str, f);
	return (0);
}
*/
