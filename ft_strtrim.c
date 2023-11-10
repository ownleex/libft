/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:09:52 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/10 18:29:29 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char const c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i++])
			return (1);
	}
	return (0);
}

static int	ft_get_start(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i] && ft_is_in_set(s1[i], set))
		i++;
	return (i);
}

static int	ft_get_end(char const *s1, char const *set)
{
	int	i;

	i = ft_strlen(s1) - 1;
	while (i >= 0 && ft_is_in_set(s1[i], set))
		i--;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*single;
	int		start;
	int		end;
	int		i;

	if (!s1 || !set)
		return (NULL);
	start = ft_get_start(s1, set);
	end = ft_get_end(s1, set);
	if (end < start)
		return (ft_strdup(""));
	single = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!single)
		return (NULL);
	i = 0;
	while (start <= end)
		single[i++] = s1[start++];
	single[i] = '\0';
	return (single);
}

/*
int	main(void)
{
	char	*s1;
	char	*set;
	char	*single;

	s1 = "test1";
	set = "t1";
	single = ft_strtrim(s1, set);
	printf("%s\n", single);
	return (0);
}
*/
