/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 23:57:11 by jzeybel           #+#    #+#             */
/*   Updated: 2021/03/25 21:48:59 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_lstprint(t_list *lst, char *param)
{
    if (ft_strnstr(param, "char", ft_strlen(param) + 1))
    {
        while (lst)
        {
            printf("%s\n", (char *)lst->data);
            lst = lst->next;
        }
    }
    else if (ft_strnstr(param, "int", ft_strlen(param)))
    {
        while (lst)
        {
            printf("%d\n", *(int *)lst->data);
            lst = lst->next;
        }
        
    }
    
}