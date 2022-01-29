/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 18:02:53 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/29 02:07:36 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	signcond(long n)
{
	if (n < 0)
		return (-1);
	else
		return (1);
}

static int	sizecond(long n)
{
	if (n < 0)
		return (2);
	else
		return (1);
}

static void	assignvals(int *sign, int *size, long *n, long *p)
{
	*sign = signcond(*n);
	*size = sizecond(*n);
	*p = 10;
	*n /= 10;
	while (*n)
	{
		*p = *p * 10;
		(*size)++;
		*n /= 10;
	}
}

char	*ft_lltoa(long n)
{
	int					sign;
	int					size;
	static char			array[50];
	long				nn;
	long				p;

	nn = n;
	assignvals(&sign, &size, &n, &p);
	nn *= sign;
	if (sign < 0)
		size = 1;
	else
		size = 0;
	p /= 10;
	while (p)
	{
		array[size++] = ((nn / p) % 10) + '0';
		p /= 10;
	}
	if (sign == -1)
		array[0] = '-';
	array[size] = 0;
	return (array);
}
