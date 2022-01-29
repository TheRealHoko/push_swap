/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:36:43 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/29 02:09:26 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack stack;
	int		i;

	i = 0;
	init_stack(&stack);
	if (ac < 2)
		printf("not enough arguments\n");
	else
	{
		if (checker(av) && init_doublons(av, ac - 1))
		{
			alloc_stack(&stack.a, ac - 1);
			create_stack(stack.a, av);

			i = ft_issorted(stack.a, ac - 1);
			if (i)
				ft_sort(&stack, ac - 1);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		ft_lstclear(&stack.a, ft_del);
		ft_lstclear(&stack.b, ft_del);
	}
	return (0);
}
