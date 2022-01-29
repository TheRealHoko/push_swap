/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 17:56:39 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/27 20:54:01 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sort(t_stack *stack, int size)
{
	int	i;

	i = ft_lstsize(stack->a);
	if (size == 2)
		ft_twosort(&stack->a, 'a');
	else if (size == 3)
		ft_threesort(&stack->a, 'a');
	else if (size <= 5)
		ft_fivesort(stack, size);
	else if (size <= 10)
		ft_insertion_sort(stack, 0);
	else if (size <= 100)
		ft_insert_opti(stack, i, ft_round((float)i / 4), i);
	else
		ft_insert_opti(stack, i, ft_round((float)i / 8), i);
	return (0);
}
