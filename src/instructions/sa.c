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
	t_list	*current;
	t_list	*next;

	current = 0;
	next = 0;
	if (!(*lst))
		return ;
	else if (!(*lst)->next)
		return ;
	current = (*lst)->next;
	next = *lst;
	current->previous = 0;
	next->next = current->next;
	next->previous = current->previous;
	current->next = next;
	*lst = current;
	printf("sa\n");
}
