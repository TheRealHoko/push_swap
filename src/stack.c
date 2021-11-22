/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:19:59 by jzeybel           #+#    #+#             */
/*   Updated: 2021/11/22 13:54:35 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnewprev(t_list *data, t_list *prev)
{
	t_list	*new;

	new = ft_lstnew(data);
	new->previous = prev;

	return (new);
}

int	init_stack(t_stack *stack)
{
	stack->a = 0;
	stack->b = 0;
	stack->sizea = 0;
	stack->sizeb = 0;
	return (0);
}

int	alloc_stack(t_list *lst, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_lstaddback(lst, );
		lst = lst->next;
		i++;
	}
}
