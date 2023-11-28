/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:39:43 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/28 02:25:50 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
void	minuscule(unsigned int i, char *c)
{
        *c = *c + 32;
}

int	main()
{
	char	str[] = "EXEMPLE";

	printf("avant striteri : %s\n", str);
	ft_striteri(str, minuscule);
	printf("apres striteri : %s\n", str);
	return (0);
}
*/
