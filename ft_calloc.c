/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:07:22 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/28 19:12:21 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*memory;

	memory = (void *)malloc(size * count);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, size * count);
	return (memory);
}

/*
int	main(void)
{
	int	*array;
	size_t	n = 10;

	array = (int *)ft_calloc(n, sizeof(int));
	if (array == NULL)
	{
		printf("Allocation échouée.\n");
		return (1);
	}

	for (size_t i = 0; i < n; i++)
	{
		if (array[i] != 0)
		{
			printf("Erreur d'initialisation à l'indice %zu.\n", i);
			free(array);
			return (1);
		}
	}
	printf("Allocation et initialisation réussies.\n");
	free(array);
	return (0);
}
*/
