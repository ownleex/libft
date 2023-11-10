/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:07:22 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/10 23:22:48 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = (void *)malloc(size * count);
	if (memory == NULL)
		return (NULL);
	memset(memory, 0, size * count);
	return (memory);
}

/*
int	main(void)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)ft_calloc(10, sizeof(char));
	while (i < 10)
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}
*/
