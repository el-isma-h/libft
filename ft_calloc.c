/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:22:58 by ismael            #+#    #+#             */
/*   Updated: 2023/10/19 19:06:17 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			total_size;
	size_t			i;

	total_size = count * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < total_size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
