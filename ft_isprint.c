/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:54:49 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/27 14:56:55 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c;

	c = 'a';
	if (ft_isprint(c))
		printf("Le caractere est imprimable\n");
	else
		printf("Le caractere n'est pas imprimable\n");	
	return (0);
}
*/
