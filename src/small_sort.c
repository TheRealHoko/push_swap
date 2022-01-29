/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:17:13 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/29 21:40:38 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_twosort(t_list **lst, char x)
{
	if (*(int *)(*lst)->data > *(int *)(*lst)->next->data)
		ft_swap(lst, x);
	return (0);
}

int	ft_threesort(t_list **lst, char x)
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

int	ft_fivesort(t_stack *stack, int size)
{
	int	i;

	i = ft_getmin(stack->a);
	if (size > 4)
		ft_movindex(&stack->a, i, 'a');
	ft_push(&stack->b, &stack->a, 'b');
	i = ft_getmin(stack->a);
	if (size > 4)
	{
		ft_movindex(&stack->a, i, 'a');
		ft_push(&stack->b, &stack->a, 'b');
	}
	ft_threesort(&stack->a, 'a');
	ft_push(&stack->a, &stack->b, 'a');
	if (size > 4)
		ft_push(&stack->a, &stack->b, 'a');
	ft_threesort(&stack->a, 'a');
	return (0);
}
