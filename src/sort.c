/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:17:13 by jzeybel           #+#    #+#             */
/*   Updated: 2021/12/14 14:58:45 by jzeybel          ###   ########.fr       */
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

int		ft_twosort(t_list **lst, char x)
{
	if (*(int *)(*lst)->data > *(int *)(*lst)->next->data)
		ft_swap(lst, x);
	return (0);
}

int		ft_threesort(t_list **lst, char x)
{
	int	i;
	int	j;
	int	k;

	i = *(int *)(*lst)->data;
	j = *(int *)(*lst)->next->data;
	k = *(int *)(*lst)->next->next->data;
	if (i < j && j > k && k > i)
	{
		ft_rrotate(lst, x);
		ft_swap(lst, x);
	}
	else if (i > j && j < k && k > i)
		ft_swap(lst, x);
	else if (i < j && j > k)
		ft_rrotate(lst, x);
	else if (i > j && j < k)
		ft_rotate(lst, x);
	else if (i > j && j > k)
	{
		ft_rotate(lst, x);
		ft_swap(lst, x);
	}
	return (0);
}

int		ft_fivesort(t_stack *stack, int size)
{
	ft_push(&stack->b, &stack->a, 'b');
	if (size == 5)
		ft_push(&stack->b, &stack->a, 'b');
	ft_threesort(&stack->a, 'a');
	ft_push(&stack->a, &stack->b, 'a');
	ft_threesort(&stack->a, 'a');
	if (size == 5)
		ft_push(&stack->a, &stack->b, 'a');
	ft_threesort(&stack->a, 'a');
	if (ft_issorted(stack->a, size))
		ft_fivesort(stack, size);
	return (0);
}

int	ft_sort(t_stack *stack, int ac)
{
	if (ac == 2)
		ft_twosort(&stack->a, 'a');
	else if (ac == 3)
		ft_threesort(&stack->a, 'a');
	else if (ac <= 5)
		ft_fivesort(stack, ac);
	else
		return (1);
	return (0);
}
