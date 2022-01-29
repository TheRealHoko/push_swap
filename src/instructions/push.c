/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 00:06:48 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/30 00:10:58 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push(t_list **to, t_list **from, char i)
{
	t_list	*tmp;
	int		data;

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
	if (i == 'a')
		printf("pa\n");
	else if (i == 'b')
		printf("pb\n");
}
