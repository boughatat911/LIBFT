/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbougrin <nbougrin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 11:25:12 by nbougrin          #+#    #+#             */
/*   Updated: 2024/11/20 10:21:07 by nbougrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	size_t	l;
	char	*y;

	if ((int)count < 0 || (int)size < 0)
		return (NULL);
	i = 0;
	y = malloc(count * size);
	if (!y)
		return (NULL);
	l = count * size;
	while (i < l)
	{
		y[i] = 0;
		i++;
	}
	return ((void *)y);
}
