/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:19:59 by jzeybel           #+#    #+#             */
/*   Updated: 2021/11/16 14:26:40 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack(t_stack *stack)
{
	stack->a = 0;
	stack->b = 0;
	stack->sizea = 0;
	stack->sizeb = 0;
	return (0);
}

int	alloc_stack(t_stack *stack)
{
	stack->a->data =
}
