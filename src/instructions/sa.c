/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:28:31 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/23 17:47:59 by jzeybel          ###   ########.fr       */
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

void	ft_push(t_list **to, t_list **from, char i)
{
	t_list	*tmp;
	int	data;

	data = 0;
	tmp = 0;
	if (!*from)
		return ;
	data = *(int *)(*from)->data;
	ft_lstadd_front(to, ft_lstnew(ft_alloc_int()));
	ft_memcpy((*to)->data, &data, sizeof(int));
	tmp = (*from)->next;
	ft_lstdelone(*from, ft_del);
	*from = tmp;
	if (i =='a')
		printf("pa\n");
	else if (i == 'b')
		printf("pb\n");
}

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
			break;
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
