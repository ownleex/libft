/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:45:52 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/28 15:30:20 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}

/*
void	del_function(void *content)
{
	free(content);
	printf("Contenu libéré.\n");
}

int	main()
{
	t_list *element = (t_list *)malloc(sizeof(t_list));
	if (!element)
		return (0);
	element->content = malloc(sizeof(int));
	if (!element->content)
	{
		free(element);
		return (0);
	}
	*(int *)element->content = 42;
	printf("Contenu avant suppression : %d\n", *(int *)element->content);
	ft_lstdelone(element, del_function);
	return (0);
}
*/
