/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:28:31 by jzeybel           #+#    #+#             */
/*   Updated: 2021/10/29 15:40:17 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_list **lst)
{
	void	*tmp;

	tmp = 0;
	if (!*lst || !(*lst)->next)
		return ;
	tmp = (*lst)->data;
	(*lst)->data = (*lst)->next->data;
	(*lst)->next->data = tmp;
	printf("sa\n");
}

void	ft_sb(t_list **lst)
{
	void	*tmp;

	tmp = 0;
	if (!*lst || !(*lst)->next)
		return ;
	tmp = (*lst)->data;
	(*lst)->data = (*lst)->next->data;
	(*lst)->next->data = tmp;
	printf("sb\n");
}

void	ft_ss(t_stack *stack)
{
	ft_sa(&stack->a);
	ft_sb(&stack->b);
	printf("ss\n");
}

void	ft_pa(t_list **lsta, t_list **lstb)
{
	t_list	*tmp;
	int	i;

	i = 0;
	tmp = 0;
	if (!*lstb)
		return ;
	i = *(int *)(*lstb)->data;
	ft_lstadd_front(lsta, ft_lstnew(ft_alloc_int()));
	ft_memcpy((*lsta)->data, &i, sizeof(int));
	tmp = (*lstb)->next;
	ft_lstdelone(*lstb, ft_del);
	*lstb = tmp;
	printf("pa\n");
}

void	ft_pb(t_list **lstb, t_list **lsta)
{
	t_list	*tmp;
	int	i;

	i = 0;
	tmp = 0;
	if (!*lsta)
		return ;
	i = *(int *)(*lsta)->data;
	ft_lstadd_front(lstb, ft_lstnew(ft_alloc_int()));
	ft_memcpy((*lstb)->data, &i, sizeof(int));
	tmp = (*lsta)->next;
	ft_lstdelone(*lsta, ft_del);
	*lsta = tmp;
	printf("pb\n");
}

void	ft_ra(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = 0;
	tmp2 = 0;
	if (!(*lst)->next)
		return ;
	tmp = ft_lstlast(*lst);
	tmp2 = (*lst)->next;
	(*lst)->next = 0;
	tmp->next = *lst;
	*lst = tmp2;
	printf("ra\n");
}

void	ft_rb(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = 0;
	tmp2 = 0;
	if (!(*lst)->next)
		return ;
	tmp = ft_lstlast(*lst);
	tmp2 = (*lst)->next;
	(*lst)->next = 0;
	tmp->next = *lst;
	*lst = tmp2;
	printf("rb\n");
}

void	ft_rr(t_stack *stack)
{
	ft_ra(&stack->a);
	ft_rb(&stack->b);
	printf("rr\n");
}

void	ft_rra(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	tmp2 = ft_lstlast(*lst);
	if (!(*lst)->next)
		return ;
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
	printf("rra\n");
}

void	ft_rrb(t_list **lst)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *lst;
	tmp2 = ft_lstlast(*lst);
	if (!(*lst)->next)
		return ;
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
	printf("rrb\n");
}

void	ft_rrr(t_stack *stack)
{
	ft_rra(&stack->a);
	ft_rrb(&stack->b);
	printf("rrr\n");
}