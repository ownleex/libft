/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:02:00 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/16 17:02:49 by ayarmaya         ###   ########.fr       */
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
int     main(void)
{
	t_list  *lst;
	t_list  *new_lst;

	lst = ft_lstnew("first");
	new_lst = ft_lstnew("second");
	ft_lstadd_front(&lst, new_lst);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
	ft_lstiter(lst, &ft_putstr_fd);
	return (0);
}
*/
