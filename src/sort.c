/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:17:13 by jzeybel           #+#    #+#             */
/*   Updated: 2021/12/02 13:27:31 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int     ft_issorted(t_list *lst, int range)
{
	int	i;

	i = 0;
	while (lst->next && range--)
	{
		++i;
		if ( *(int *)lst->data > *(int *)lst->next->data)
			return (i);
		lst = lst->next;
	}
	return (0);
}

int     ft_easysort(t_stack *stack)
{
	int	i;
	int	j;
	int	k;

	i = *(int *)stack->a->data;
	j = *(int *)stack->a->next->data;
	k = *(int *)stack->a->next->next->data;
	if (i > j && i < k)
		ft_sa(&stack->a, 1);
	printf("%d %d %d\n", i, j, k);
	return (0);
}
