/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:53:40 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/27 14:52:30 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*
int	main(void)
{
	int	c;

	c = '0';
	if (ft_isalpha(c))
		printf("Le caractere est une lettre\n");
	else
		printf("Le caractere n'est pas une lettre\n");
	return (0);
}
*/
