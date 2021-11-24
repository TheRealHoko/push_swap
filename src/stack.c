/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:19:59 by jzeybel           #+#    #+#             */
/*   Updated: 2021/11/24 21:12:45 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnewprev(void *data, t_list *prev)
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
	while (size--)
		ft_lstadd_back(lst, ft_lstnew(ft_alloc_int()));
	return (0);
}

int	create_stack(t_list *lst, char **av)
{
	int	i;

	while (*(++av))
	{
		i = ft_atoll(*av);
		ft_memcpy(lst->data, &i, sizeof(int));
		lst = lst->next;
	}
	return (0);
}
