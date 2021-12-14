/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:38:20 by jzeybel           #+#    #+#             */
/*   Updated: 2021/12/14 14:58:57 by jzeybel          ###   ########.fr       */
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
int		ft_swap(t_list **lst, char i);
void	ft_ss(t_stack *stack);
void	ft_push(t_list **to, t_list **from, char i);
int		ft_rotate(t_list **lst, char i);
void	ft_rr(t_stack *stack);
int		ft_rrotate(t_list **lst, char i);
void	ft_rrr(t_stack *stack);
int		ft_issorted(t_list *lst, int range);
int		ft_twosort(t_list **lst, char x);
int		ft_threesort(t_list **lst, char x);
int		ft_fivesort(t_stack *stack, int size);
int		ft_sort(t_stack *stack, int ac);

#endif
