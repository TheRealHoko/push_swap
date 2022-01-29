/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:37:46 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/29 02:12:38 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_insertion_sort(t_stack *stack, int _break)
{
	while (!ft_lstis_empty(stack->a))
	{
		ft_movindex(&stack->a, ft_getmin(stack->a), 'a');
		ft_push(&stack->b, &stack->a, 'b');
	}
	if (_break)
		return ;
	while (!ft_lstis_empty(stack->b))
		ft_push(&stack->a, &stack->b, 'a');
}

void	ft_insert_opti(t_stack *stack, int size, int thresh, int quarter)
{
	int		isize;
	int		i;
	int		minto;
	t_list	*tmp;

	tmp = ft_pre_sort(ft_cpylist(stack->a));
	isize = ft_lstsize(stack->a);
	minto = *(int *)ft_lstindex(tmp, thresh - 1)->data;
	ft_lstclear(&tmp, ft_del);
	i = 0;
	quarter -= thresh;
	if (quarter < thresh)
		quarter = thresh;
	while (isize > quarter)
	{
		i = ft_getminto(stack->a, minto);
		if (i == -1)
			i = ft_getmin(stack->a);
		tmp = stack->a->next;
		if (tmp && *(int *)tmp->data == *(int *)ft_lstindex(stack->a, i)->data)
			ft_swap(&stack->a, 'a');
		else
			ft_movindex(&stack->a, i, 'a');
		ft_push(&stack->b, &stack->a, 'b');
		isize--;
	}
	if (isize == thresh)
		ft_insertion_sort(stack, 1);
	else
		ft_insert_opti(stack, size, thresh, quarter);
	while (!ft_lstis_empty(stack->b))
	{
		i = ft_getmax(stack->b);
		tmp = stack->b->next;
		if (tmp && *(int *)tmp->data == *(int *)ft_lstindex(stack->b, i)->data)
			ft_swap(&stack->b, 'b');
		else
			ft_movindex(&stack->b, i, 'b');
		ft_push(&stack->a, &stack->b, 'a');
	}
}
