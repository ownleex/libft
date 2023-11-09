/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:50:26 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/09 14:54:44 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	if (start >= ft_strlen(str))
	{
		substr[0] = '\0';
		return (substr);
	}
	while (i < len && str[start] != '\0')
	{
		substr[i] = str[start];
		i++;
		start++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
int	main(void)
{
	char	*str;
	char	*substr;

	str = "test";
	substr = ft_substr(str, 1, 2);
	printf("%s\n", substr);
	return (0);
}
*/
