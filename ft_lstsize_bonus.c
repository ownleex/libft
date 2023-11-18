/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 15:19:39 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/18 01:47:27 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
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
	printf("%d\n", ft_lstsize(lst));
	return (0);
}
*/
