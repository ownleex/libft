/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:53:53 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/27 14:51:04 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c;

	c = -1;
	if (ft_isascii(c))
		printf("Le caractere est dans la table ASCII\n");
	else
		printf("Le caractere n'est pas dans la table ASCII\n");
	return (0);
}
*/
