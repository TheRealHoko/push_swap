/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:19:59 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/30 20:24:14 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	init_stack(t_stack *stack)
{
	stack->a = 0;
	stack->b = 0;
	return (0);
}

void	*ft_alloc_int(void)
{
	void	*ptr;

	ptr = malloc(sizeof(int));
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, sizeof(int));
	return (ptr);
}

int	alloc_stack(t_list **lst, int size)
{
	if (!size)
		return (1);
	while (size--)
		ft_lstadd_back(lst, ft_lstnew(ft_alloc_int()));
	return (0);
}

int	create_stack(t_list *lst, char **av)
{
	int	i;

	while (*av)
	{
		i = ft_atoll(*av++);
		ft_memcpy(lst->data, &i, sizeof(int));
		lst = lst->next;
	}
	return (0);
}
