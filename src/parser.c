/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 17:12:59 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/30 00:05:34 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	checker(char **av)
{
	int	i;
	int	j;

	j = 0;
	while (av[++j] != 0)
	{
		i = 0;
		if (!(ft_atoll(av[j]) < INT_MAX) || !(av[j][0]))
			return (0);
		while (av[j][i] != 0)
		{
			if (ft_isdigit(av[j][i]) \
			|| (av[j][0] == '-' && ft_isdigit(av[j][1 + i])))
				i++;
			else
				return (0);
		}
	}
	return (1);
}

int	init_doublons(char **av, int size)
{
	int	*tmp;
	int	i;

	i = 0;
	tmp = malloc(sizeof(int) * size);
	if (!tmp)
		return (0);
	while (*(++av) != 0)
		tmp[i++] = ft_atoll(*av);
	if (!cmp_doublons(tmp, size))
		return (0);
	return (1);
}

int	cmp_doublons(int *data, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (data[i] == data[j++])
			{
				free(data);
				return (0);
			}
		}
		i++;
	}
	free(data);
	return (1);
}
