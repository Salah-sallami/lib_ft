/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:36:57 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/19 21:28:38 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nmbr(long long n)
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

static long long	handel(const char *str, int minus, int i)
{
	long long	atoi;

	atoi = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if ((atoi >= 922337203685477580 && ((minus == 1 && str[i] >= '8')
					|| (minus == 0 && str[i] >= '7')))
			|| (len_nmbr(atoi) == 19 && str[i]))
		{
			if (minus == 1)
				return (0);
			else
				return (-1);
		}
		atoi = atoi * 10 + (str[i] - 48);
		i++;
	}
	return (atoi);
}

int	ft_atoi(const char *str)
{
	int			minus;
	int			plus;
	long long	atoi;
	int			i;

	minus = 0;
	plus = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (minus == 1 || plus == 1)
			return (0);
		if (str[i] == '-')
			minus++;
		if (str[i] == '+')
			plus++;
		i++;
	}
	atoi = 0;
	atoi = handel(str, minus, i);
	if (minus == 1)
		atoi *= -1;
	return (atoi);
}
