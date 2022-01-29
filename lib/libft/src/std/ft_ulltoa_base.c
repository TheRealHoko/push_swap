/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:32:47 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/29 02:09:00 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(long n, int size)
{
	int	i;

	i = 1;
	n /= size;
	while (n)
	{
		i++;
		n /= size;
	}
	return (i);
}

char	*ft_ulltoa_base(long n, char *base)
{
	int			lenb;
	int			len;
	int			i;
	static char	array[50];

	if (n < 0)
		n *= -1;
	lenb = ft_strlen(base);
	len = ft_len(n, lenb);
	i = len;
	array[i] = 0;
	while (i > 0)
	{
		i--;
		array[i] = base[n % lenb];
		n /= lenb;
	}
	return (array);
}
