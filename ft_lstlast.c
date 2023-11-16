/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:23:05 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/16 16:31:32 by ayarmaya         ###   ########.fr       */
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

	lst = ft_lstnew("first");
	new_lst = ft_lstnew("second");
	new_lst2 = ft_lstnew("third");
	ft_lstadd_front(&lst, new_lst);
	ft_lstadd_front(&lst, new_lst2);
	printf("%s\n", ft_lstlast(lst)->content);
	return (0);
}
*/
