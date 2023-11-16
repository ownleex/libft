/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 01:45:11 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/16 15:19:03 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *nouveau)
{
	if (!lst || !nouveau)
		return ;
	nouveau->next = *lst;
	*lst = nouveau;
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
	return (0);
}
*/
