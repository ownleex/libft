/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:05:37 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/28 18:26:35 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tmp;
	void	*fcontent;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		fcontent = f(lst->content);
		tmp = ft_lstnew(fcontent);
		if (!tmp)
		{
			if (del)
				del(fcontent);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, tmp);
		lst = lst->next;
	}
	return (newlst);
}

/*
void	*double_content(void *content)
{
	int *new_content = malloc(sizeof(int));
	if (new_content)
		*new_content = *(int *)content * 2;
	return new_content;
}

void	del_content(void *content)
{
	free(content);
}

void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
}

int	main()
{
	t_list	*lst;
	t_list	*mapped_lst;
	int	arr[] = {1, 2, 3, 4, 5};
	int	i;

	lst = NULL;
	i = 0;
	while (i < 5)
	{
		ft_lstadd_back(&lst, ft_lstnew(&arr[i]));
		i++;
	}
	printf("Liste originale :\n");
	print_list(lst);
	mapped_lst = ft_lstmap(lst, double_content, del_content);
	printf("\nListe après ft_lstmap :\n");
	print_list(mapped_lst);
	ft_lstclear(&lst, del_content);
	ft_lstclear(&mapped_lst, del_content);
	return 0;
}
*/
