/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freetab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jzeybel <jzeybel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 03:15:16 by jzeybel           #+#    #+#             */
/*   Updated: 2022/01/28 03:15:57 by jzeybel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_freetab(char **tab, size_t size)
{
	size_t	i;

	i = 0;
	if (tab)
	{
		while (i < size)
			free(tab[i++]);
		free(tab);
		return (i);
	}
	return (0);
}
