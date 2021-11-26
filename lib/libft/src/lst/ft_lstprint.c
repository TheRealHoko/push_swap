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

static  void PrintStr(t_list *lst)
{
    while (lst)
    {
        printf("%s\n", (char *)lst->data);
        lst = lst->next;
    }
}

static  void PrintInt(t_list *lst)
{
    while (lst)
    {
        printf("%d\n", *(int *)lst->data);
        lst = lst->next;
    }
}

static  void PrintNode(t_list *lst)
{
    while (lst)
    {
        printf("\n");
        if (lst->previous)
            printf("Previous : %d\n", *(int *)lst->previous->data);
        printf("Current : %d\n", *(int *)lst->data);
        if (lst->next)
            printf("Next : %d\n", *(int *)lst->next->data);
        printf("\n");
        lst = lst->next;
    }
}

void    ft_lstprint(t_list *lst, char *param)
{
    if (ft_strnstr(param, "str", ft_strlen(param)))
        PrintStr(lst);
    else if (ft_strnstr(param, "int", ft_strlen(param)))
        PrintInt(lst);
    else if (ft_strnstr(param, "node", ft_strlen(param)))
        PrintNode(lst);
    else
        return ;
}