/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:07:38 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/30 00:08:42 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rotate(t_list **lst, char i)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = 0;
	tmp2 = 0;
	if (!(*lst)->next)
		return (1);
	tmp = ft_lstlast(*lst);
	tmp2 = (*lst)->next;
	(*lst)->next = 0;
	tmp->next = *lst;
	*lst = tmp2;
	if (i == 'a')
		printf("ra\n");
	else if (i == 'b')
		printf("rb\n");
	return (0);
}

void	ft_rr(t_stack *stack)
{
	if (ft_rotate(&stack->a, 0))
		return ;
	if (ft_rotate(&stack->b, 0))
		return ;
	printf("rr\n");
}
