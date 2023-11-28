/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:33:25 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/28 02:28:11 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = (*f)(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}

/*
char	minuscule(unsigned int i, char c)
{
	return c + 32;
}

int	main()
{
	char	*str = "HELLO";
	char	*result;

	printf("Avant strmapi : %s\n", str);
	result = ft_strmapi(str, minuscule);
	printf("Apres strmapi : %s\n", result);
	free(result);
	return 0;
}
*/
