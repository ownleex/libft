/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:53:31 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/27 14:55:13 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c;

	c = ',';
	if (ft_isalnum(c))
		printf("Le caractere est un chiffre ou une lettre\n");
	else
		printf("Le caractere n'est ni un chiffre ni une lettre\n");
	return (0);
}
*/
