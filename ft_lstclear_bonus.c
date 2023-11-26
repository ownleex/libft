/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:53:04 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/26 17:03:24 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*liste;

	while (*lst)
	{
		liste = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = liste;
	}
	*lst = NULL;
}

/*
int	main(void)
{
	t_list	*lst;
	t_list	*new_lst;

	char *first = ft_strdup("first");
	char *second = ft_strdup("second");

	lst = ft_lstnew(first);
	new_lst = ft_lstnew(second);
	ft_lstadd_front(&lst, new_lst);
	printf("%s\n", (char *)lst->content);
	printf("%s\n", (char *)lst->next->content);
	ft_lstclear(&lst, free);
	if (lst == NULL)
		printf("La mémoire a été libérée avec succès.\n");
	else
		printf("La mémoire n'a pas été complètement libérée.\n");
	return 0;
}
*/
