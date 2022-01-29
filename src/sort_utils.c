/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:54:32 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/30 00:00:27 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_issorted(t_list *lst, int range)
{
	int	i;

	i = 0;
	while (lst->next && range--)
	{
		++i;
		if (*(int *)lst->data > *(int *)lst->next->data)
			return (i);
		lst = lst->next;
	}
	return (0);
}

int	ft_getmin(t_list *lst)
{
	return (ft_getminrange(lst, 0, ft_lstsize(lst)));
}

int	ft_getmax(t_list *lst)
{
	return (ft_getmaxrange(lst, 0, ft_lstsize(lst)));
}

int	ft_getminrange(t_list *lst, int start, int end)
{
	int	index;
	int	min;
	int	i;

	index = 0;
	i = -1;
	if (!lst)
		return (0);
	if (start < 0)
		start = 0;
	while (++i < start)
		lst = lst->next;
	min = *(int *)lst->data;
	while (lst && end--)
	{
		if (min > *(int *)lst->data)
		{
			min = *(int *)lst->data;
			index = i;
		}
		i++;
		lst = lst->next;
	}
	return (index);
}
