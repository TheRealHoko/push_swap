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
}				t_stack;

int	checker(char **);
int	init_doublons(char **av, int size);
int	cmp_doublons(int *data, int size);
int	init_stack(t_stack *);
int	alloc_stack(t_list **lst, int size);
int	create_stack(t_list *lst, char **av);
void	*ft_alloc_int(void);
void	ft_sa(t_list **lst, int i);
void	ft_sb(t_list **lst, int i);
void	ft_ss(t_stack *stack);
void	ft_pa(t_list **lsta, t_list **lstb);
void	ft_pb(t_list **lstb, t_list **lsta);
void	ft_ra(t_list **lst, int i);
void	ft_rb(t_list **lst, int i);
void	ft_rr(t_stack *stack);
void	ft_rra(t_list **lst, int i);
void	ft_rrb(t_list **lst, int i);
void	ft_rrr(t_stack *stack);

#endif
