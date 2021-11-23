/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:38:20 by jzeybel           #+#    #+#             */
/*   Updated: 2021/11/22 18:25:10 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>

typedef struct	s_stack
{
	t_list	*a;
	t_list	*b;
	int sizea;
	int sizeb;
}				t_stack;

int	checker(char **);
int	init_doublons(char **av, int size);
int	cmp_doublons(int *data, int size);
int	init_stack(t_stack *);
int	alloc_stack(t_list **lst, char **nums);

#endif
