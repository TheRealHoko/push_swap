/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:36:43 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/30 20:25:09 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_arg(char **av, int ac, char ***tmp, int *j)
{
	*tmp = (av + 1);
	*j = ac - 1;
	if (ac == 2)
	{
		*tmp = ft_split(av[1], " ");
		*j = ft_tablen(*tmp);
	}
}

int	start_sort(char **av, int ac, int *i, t_stack *stack)
{
	char	**tmp;
	int		j;

	split_arg(av, ac, &tmp, &j);
	if (checker(tmp) && init_doublons(tmp, j))
	{
		alloc_stack(&stack->a, j);
		create_stack(stack->a, tmp);
		if (ac == 2)
			ft_freetab(tmp, j);
		*i = ft_issorted(stack->a, j);
		if (*i)
			ft_sort(stack, j);
	}
	else
	{
		if (ac == 2)
			ft_freetab(tmp, j);
		printf("Error\n");
		return (1);
	}
	return (0);
}

int	main(int ac, char **av)
{
	t_stack	stack;
	int		i;

	i = 0;
	init_stack(&stack);
	if (ac < 2)
		printf("not enough arguments\n");
	else
	{
		start_sort(av, ac, &i, &stack);
		ft_lstclear(&stack.a, ft_del);
		ft_lstclear(&stack.b, ft_del);
	}
	return (0);
}
