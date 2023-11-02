/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:37:37 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/02 22:40:52 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
int	main(void)
{
	const char	*chaine = "Bonjour le monde";
	char c = 'j';
	
	char *resultat = ft_strrchr(chaine, c);
	
	if (resultat != NULL)
	{
		printf("Le caractère '%c' est trouvé à la position : %ld\n",\
		 c, resultat - chaine);
	}
	else
	{
		printf("Le caractère '%c' n'est pas trouvé dans la chaîne.\n", c);
	}
	return (0);
}
*/
