/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:09:00 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/30 00:11:24 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rrotate(t_list **lst, char i)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = 0;
	tmp2 = 0;
	if (!(*lst) || !(*lst)->next)
		return (1);
	tmp = *lst;
	tmp2 = ft_lstlast(*lst);
	while (*lst)
	{
		if ((*lst)->next == ft_lstlast(*lst))
		{
			(*lst)->next = 0;
			break ;
		}
		*lst = (*lst)->next;
	}
	*lst = tmp2;
	(*lst)->next = tmp;
	if (i == 'a')
		printf("rra\n");
	else if (i == 'b')
		printf("rrb\n");
	return (0);
}

void	ft_rrr(t_stack *stack)
{
	if (ft_rrotate(&stack->a, 0))
		return ;
	if (ft_rrotate(&stack->b, 0))
		return ;
	printf("rrr\n");
}
