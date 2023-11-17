/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:05:37 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/16 19:05:46 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;
	void	*content;

	if (!lst || !f)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		content = f(lst->content);
		tmp = ft_lstnew(content);
		if (!tmp)
		{
			if (del)
				del(content);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, tmp);
		lst = lst->next;
	}
	return (newlst);
}

int	main(void)
{
	t_list	*lst;
	t_list	*newlst;
	int		values[] = {1, 2, 3, 4, 5};
	int		i;

	lst = NULL;
	i = 0;
	while (i < 5)
	{
		ft_lstadd_back(&lst, ft_lstnew(&values[i]));
		i++;
	}

	// Afficher la liste originale
	printf("Liste originale: ");
	ft_lstiter(lst, ft_printlstcontent);
	printf("\n");

	// Appliquer ft_lstmap
	newlst = ft_lstmap(lst, ft_doubler, ft_del);

	// Afficher la nouvelle liste
	printf("Nouvelle liste: ");
	ft_lstiter(newlst, ft_printlstcontent);
	printf("\n");

	// Nettoyage
	ft_lstclear(&lst, ft_del);
	ft_lstclear(&newlst, ft_del);
	return (0);
}
