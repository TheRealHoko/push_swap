/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 23:17:13 by jzeybel           #+#    #+#             */
/*   Updated: 2021/12/01 12:39:42 by jzeybel          ###   ########.fr       */
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

	return (0);
}
