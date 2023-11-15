/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayarmaya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:33:25 by ayarmaya          #+#    #+#             */
/*   Updated: 2023/11/15 17:36:52 by ayarmaya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
        char			*result;
        unsigned int	i;

        if (!str || !f)
                return (NULL);
        result = malloc(sizeof(char) * (ft_strlen(str) + 1));
        if (!result)
                return (NULL);
        i = 0;
        while (str[i])
        {
                result[i] = f(i, str[i]);
                i++;
        }
        result[i] = 0;
        return (result);
}

/* 
int     main(void)
{
        char    *str = "Hello World!";
        char    *result;

        result = ft_strmapi(str, &ft_toupper);
        printf("%s\n", result);
        free(result);
        return (0);
}
*/
