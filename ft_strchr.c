/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:56:12 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/27 22:56:00 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char) c)
			break ;
		i++;
	}
	if (s[i] == (char) c)
		return ((char *) s + i);
	return (NULL);
}

/*
int	main(void)
{
	const char	*chaine = "Bonjour le monde";
	char c = 'j';
	
	char *resultat = ft_strchr(chaine, c);
	
	if (resultat != NULL)
	{
		printf("Le caractère '%c' est la %ldeme lettre\n",\
		 c, resultat - chaine + 1);
	}
	else
	{
		printf("Le caractère '%c' n'est pas trouvé dans la chaîne.\n", c);
	}
	return (0);
}
*/
