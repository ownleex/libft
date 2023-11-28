/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:50:26 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/28 20:46:52 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*result;
	size_t	i;
	size_t	str_len;

	if (str == NULL)
		return (NULL);
	str_len = ft_strlen(str);
	if (start >= str_len)
		return (ft_strdup(""));
	if (start + len > str_len)
		len = str_len - start;
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < len && str[start] != '\0')
	{
		result[i] = str[start];
		i++;
		start++;
	}
	result[i] = '\0';
	return (result);
}

/*
int	main(void)
{
	char	*str;
	char	*substr;

	str = "anticonstitutionnellement";
	substr = ft_substr(str, 3, 8);
	printf("%s\n", substr);
	return (0);
}
*/
