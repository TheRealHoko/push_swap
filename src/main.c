/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 13:36:43 by jzeybel           #+#    #+#             */
/*   Updated: 2021/11/28 23:51:41 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack stack;

	init_stack(&stack);
	if (ac < 2)
		printf("not enough arguments\n");
	else
	{
		if (checker(av) && init_doublons(av, ac - 1))
		{
			alloc_stack(&stack.a, ac - 1);
			create_stack(stack.a, av);

			printf("\n----STACK A----\n\n");
			ft_lstprint(stack.a, "int");
			printf("\n----STACK B----\n\n");
			ft_lstprint(stack.b, "int");

			printf("\n\n----Instructions----\n\n");
			ft_timsort(&stack, ac - 1);

			printf("\n\n----STACK A after----\n\n");
			ft_lstprint(stack.a, "int");
			printf("\n\n----STACK B after----\n\n");
			ft_lstprint(stack.b, "int");
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
