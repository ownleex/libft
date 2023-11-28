/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:02:00 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/28 15:49:57 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

int	main()
{
	t_list	*elem1, *elem2, *elem3;

	elem1 = (t_list *)malloc(sizeof(t_list));
	elem2 = (t_list *)malloc(sizeof(t_list));
	elem3 = (t_list *)malloc(sizeof(t_list));
	if (!elem1 || !elem2 || !elem3)
	{
	printf("Échec de l'allocation de la mémoire.\n");
	exit(EXIT_FAILURE);
	}
	elem1->content = "Element 1";
	elem1->next = elem2;
	elem2->content = "Element 2";
	elem2->next = elem3;
	elem3->content = "Element 3";
	elem3->next = NULL;
	ft_lstiter(elem1, print_content);
	free(elem1);
	free(elem2);
	free(elem3);
	return 0;
}
*/
