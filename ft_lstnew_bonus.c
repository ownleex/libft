/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 00:49:26 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/23 17:23:24 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nouveau;

	nouveau = malloc(sizeof(t_list));
	if (!nouveau)
		return (NULL);
	nouveau->content = content;
	nouveau->next = NULL;
	return (nouveau);
}

/*
int	main(void)
{
	char	*str;
	t_list	*list;

	str = "bonjour";
	list = ft_lstnew(str);
	printf("%s\n", (char *)list->content);
	return (0);
}
*/
