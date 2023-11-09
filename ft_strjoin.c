/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:16:02 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/09 20:23:08 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*single;
	int		i;
	int		j;
	int		total_length;

	if (!s1 || !s2)
		return (NULL);
	total_length = ft_strlen(s1) + ft_strlen(s2);
	single = (char *)malloc(sizeof(char) * (total_length + 1));
	if (!single)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		single[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		single[i + j] = s2[j];
		j++;
	}
	single[i + j] = '\0';
	return (single);
}

/*
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*single;

	s1 = "test1";
	s2 = "test2";
	single = ft_strjoin(s1, s2);
	printf("%s\n", single);
	return (0);
}
*/
