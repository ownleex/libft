/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:23:05 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/28 15:14:32 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

/*
int     main(void)
{
	t_list  *lst;
	t_list  *new_lst;
	t_list  *new_lst2;

	lst = ft_lstnew("third");
	new_lst = ft_lstnew("second");
	new_lst2 = ft_lstnew("first");
	ft_lstadd_front(&lst, new_lst);
	ft_lstadd_front(&lst, new_lst2);
	printf("le dernier element est %s\n", (char *)ft_lstlast(lst)->content);
	return (0);
}
*/
