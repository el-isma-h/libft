/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ismael <ismael@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 18:16:55 by ismael            #+#    #+#             */
/*   Updated: 2023/10/23 12:31:50 by ismael           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num != 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
