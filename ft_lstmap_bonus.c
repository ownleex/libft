/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 17:05:37 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/26 18:40:29 by ayarmaya         ###   ########.fr       */
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

/*
// Une fonction simple pour doubler une valeur entière
void	*double_content(void *content)
{
	int *new_content = malloc(sizeof(int));
	if (new_content)
		*new_content = *(int *)content * 2;
	return new_content;
}

// Une fonction pour supprimer le contenu d'un élément de la liste
void	del_content(void *content)
{
	free(content);
}

// Une fonction pour afficher le contenu d'un élément de la liste
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
	t_list	*lst = NULL;
	t_list	*new_lst;

	// Ajout de quelques éléments à la liste
	int values[] = {1, 2, 3, 4, 5};
	for (int i = 0; i < 5; i++)
	{
		int *content = malloc(sizeof(int));
		*content = values[i];
		t_list *new_node = ft_lstnew(content);
		if (new_node == NULL)
		{
			// Gestion d'erreur
			// Libération de la mémoire si l'allocation échoue
			free(content);
			ft_lstclear(&lst, del_content);
			return 1;
		}
		ft_lstadd_back(&lst, new_node);
	}

	// Application de ft_lstmap
	new_lst = ft_lstmap(lst, double_content, del_content);

	// Affichage de la liste originale et de la nouvelle liste
	printf("Original list:\n");
	print_list(lst);
	printf("\nDoubled list:\n");
	print_list(new_lst);

	// Nettoyage
	ft_lstclear(&lst, del_content);
	ft_lstclear(&new_lst, del_content);
	return 0;
}
*/
