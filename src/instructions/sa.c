/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 15:28:31 by jzeybel           #+#    #+#             */
/*   Updated: 2021/12/02 16:45:51 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sa(t_list **lst, int i)
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
	if (i)
		printf("sa\n");
	return (0);
}

int	ft_sb(t_list **lst, int i)
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
	if (i)
		printf("sb\n");
	return (0);
}

void	ft_ss(t_stack *stack)
{
	if (ft_sa(&stack->a, 0))
		return ;
	if (ft_sb(&stack->b, 0))
		return ;
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

int	ft_ra(t_list **lst, int i)
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
	if (i)
		printf("ra\n");
	return (0);
}

int	ft_rb(t_list **lst, int i)
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
	if (i)
		printf("rb\n");
	return (0);
}

void	ft_rr(t_stack *stack)
{
	if (ft_ra(&stack->a, 0))
		return ;
	if (ft_rb(&stack->b, 0))
		return ;
	printf("rr\n");
}

int	ft_rra(t_list **lst, int i)
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
	if (i)
		printf("rra\n");
	return (0);
}

int	ft_rrb(t_list **lst, int i)
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
	if (i)
		printf("rrb\n");
	return (0);
}

void	ft_rrr(t_stack *stack)
{
	if (ft_rra(&stack->a, 0))
		return ;
	if (ft_rrb(&stack->b, 0))
		return ;
	printf("rrr\n");
}
