/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:05:37 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/16 18:17:16 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
    t_list	*nlst;
    t_list	*alst;
    t_list	*tmp;
    t_list	*tmp1;

    if (lst == NULL || f == NULL)
        return (NULL);
    tmp = lst;
    tmp1 = f(tmp);
    alst = ft_lstnew(tmp1->content, tmp1->content_size);
    if (alst == NULL)
        return (NULL);
    nlst = alst;
    tmp = tmp->next;
    while (tmp)
    {
        tmp1 = f(tmp);
        nlst->next = ft_lstnew(tmp1->content, tmp1->content_size);
        tmp = tmp->next;
        nlst = nlst->next;
    }
    return (alst);
}
