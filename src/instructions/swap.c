/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:28:31 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/30 00:09:26 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_swap(t_list **lst, char i)
{
	t_list	*tmp;
	int		size;

	tmp = 0;
	size = ft_lstsize(*lst);
	if (!*lst || !(*lst)->next)
		return (1);
	tmp = *lst;
	*lst = (*lst)->next;
	if (size == 2)
		tmp->next = NULL;
	else
		tmp->next = tmp->next->next;
	(*lst)->next = tmp;
	if (i == 'a')
		printf("sa\n");
	else if (i == 'b')
		printf("sb\n");
	return (0);
}

void	ft_ss(t_stack *stack)
{
	if (ft_swap(&stack->a, 0))
		return ;
	if (ft_swap(&stack->b, 0))
		return ;
	printf("ss\n");
}
