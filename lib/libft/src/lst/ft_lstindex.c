/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 17:08:36 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/29 01:25:41 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstindex(t_list *lst, int index)
{
	int		i;
	t_list	*new;

	i = -1;
	new = lst;
	if (index >= ft_lstsize(lst) || (index < 0))
		return (new);
	while (++i < index && new)
		new = new->next;
	return (new);
}
