/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:37:43 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/19 21:29:21 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_number(int n)
{
	int	len;

	len = 1;
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*push_allocation(int len, int temp, int minus)
{
	char	*p;
	char	c;
	int		t;
	int		i;

	p = malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	i = 0;
	p[len] = '\0';
	while (i < len)
	{
		t = temp % 10;
		temp = temp / 10;
		c = t + '0';
		len--;
		p[len] = c;
		if (minus == -1)
			p[0] = '-';
	}
	return (p);
}

char	*ft_itoa(int n)
{
	int	len;
	int	temp;
	int	minus;

	len = 0;
	minus = 1;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		minus = -1;
	}
	temp = n;
	len = len_number(n);
	if (minus == -1)
		len += 1;
	return (push_allocation(len, temp, minus));
}
