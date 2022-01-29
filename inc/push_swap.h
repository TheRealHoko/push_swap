/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:38:20 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/28 02:33:26 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <limits.h>

typedef struct s_stack
{
	t_list	*a;
	t_list	*b;
}				t_stack;

int		checker(char **av);
int		init_doublons(char **av, int size);
int		cmp_doublons(int *data, int size);
int		init_stack(t_stack *stack);
int		alloc_stack(t_list **lst, int size);
int		create_stack(t_list *lst, char **av);
void	*ft_alloc_int(void);
int		ft_swap(t_list **lst, char i);
void	ft_ss(t_stack *stack);
void	ft_push(t_list **to, t_list **from, char i);
int		ft_rotate(t_list **lst, char i);
void	ft_rr(t_stack *stack);
int		ft_rrotate(t_list **lst, char i);
void	ft_rrr(t_stack *stack);
int		ft_issorted(t_list *lst, int range);
int		ft_getmin(t_list *lst);
int		ft_getmax(t_list *lst);
int		ft_getminrange(t_list *lst, int start, int end);
int		ft_getmaxrange(t_list *lst, int start, int end);
int		ft_getminto(t_list *lst, int minto);
void	ft_movindex(t_list **lst, int index, char c);
int		ft_countmov(t_list *lst, int index);
int		ft_twosort(t_list **lst, char x);
int		ft_threesort(t_list **lst, char x);
int		ft_fivesort(t_stack *stack, int size);
int		ft_sort(t_stack *stack, int size);
void	ft_insertion_sort(t_stack *stack, int _break);
t_list	*ft_pre_sort(t_list *lst);
t_list	*ft_cpylist(t_list *lst);
void	ft_insert_opti(t_stack *stack, int size, int thresh, int quarter);
//void	ft_merge_sort(t_stack *stack, int start, int end);

#endif
