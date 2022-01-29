/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 01:27:49 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/29 01:33:52 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	printstr(t_list *lst)
{
	while (lst)
	{
		printf("%s\n", (char *)lst->data);
		lst = lst->next;
	}
}

static void	printint(t_list *lst, char *sep)
{
	while (lst)
	{
		printf("%d", *(int *)lst->data);
		if (!ft_strncmp(sep, "\n", 1))
			printf("\n");
		else if (!ft_strncmp(sep, "\t", 1))
			printf("\t");
		else if (!ft_strncmp(sep, " ", 1))
			printf(" ");
		lst = lst->next;
	}
}

static void	printnode(t_list *lst)
{
	while (lst)
	{
		printf("Current :%d (%p)\n", *(int *)lst->data, lst);
		if (lst->next)
			printf("Next :%d (%p)\n", *(int *)lst->next->data, lst->next);
		printf("\n");
		lst = lst->next;
	}
}

void	ft_lstprint(t_list *lst, char *param, char *sep)
{
	if (!lst)
		return ;
	else if (!ft_strncmp(param, "str", ft_strlen(param)))
		printstr(lst);
	else if (!ft_strncmp(param, "int", ft_strlen(param)))
		printint(lst, sep);
	else if (!ft_strncmp(param, "node", ft_strlen(param)))
		printnode(lst);
	else
		return ;
}
