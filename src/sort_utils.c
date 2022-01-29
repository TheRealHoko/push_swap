/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 16:54:32 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/27 23:31:11 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_issorted(t_list *lst, int range)
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

int		ft_getmin(t_list *lst)
{
	return (ft_getminrange(lst, 0, ft_lstsize(lst)));
}

int		ft_getmax(t_list *lst)
{
	return (ft_getmaxrange(lst, 0, ft_lstsize(lst)));
}

int		ft_getminrange(t_list *lst, int start, int end)
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

int		ft_getmaxrange(t_list *lst, int start, int end)
{
	int	index;
	int	max;
	int	i;

	index = 0;
	i = -1;
	if (!lst)
		return (0);
	while (++i < start)
		lst = lst->next;
	max = *(int *)lst->data;
	while (lst && end--)
	{
		if ((max < *(int *)lst->data))
		{
			max = *(int *)lst->data;
			index = i;
		}
		i++;
		lst = lst->next;
	}
	return (index);
}

void	ft_movindex(t_list **lst, int index, char c)
{
	int	size;

	size = ft_lstsize(*lst) - 1;
	if (!(*lst))
		return ;
	while (index != 0)
	{
		if(index > ((size+1) / 2))
		{
			ft_rrotate(lst, c);
			index++;
		}
		else
		{
			ft_rotate(lst, c);
			index--;
		}
		if (index > size)
			index = 0;
	}
}

int		ft_getminto(t_list *lst, int minto)
{
	int	i;
	int	min;

	i = 0;
	while (lst)
	{
		min = *(int *)lst->data;
		if (min <= minto)
			return (i);
		i++;
		lst = lst->next;
	}
	return (-1);
}

t_list	*ft_cpylist(t_list *lst)
{
	t_list	*tmp;
	t_list	*head;

	tmp = NULL;
	if (alloc_stack(&tmp, ft_lstsize(lst)))
		return (NULL);
	head = tmp;;
	while (lst)
	{
		ft_memcpy(tmp->data, lst->data, sizeof(int));
		lst = lst->next;
		tmp = tmp->next;
	}
	return (head);
}

t_list	*ft_pre_sort(t_list *lst)
{
	t_list	*head;
	t_list	*min;
	int		i;
	int		tmp;

	i = 0;
	head = lst;
	tmp = 0;
	while (lst)
	{
		i = ft_getmin(lst);
		min = ft_lstindex(lst, i);
		tmp = *(int *)lst->data;
		ft_memcpy(lst->data, min->data, sizeof(int));
		ft_memcpy(min->data, &tmp, sizeof(int));
		lst = lst->next;
	}
	return (head);
}
