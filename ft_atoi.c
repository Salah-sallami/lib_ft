/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:36:57 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/04 20:08:15 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	minus;
	int	plus;
	int	i;

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
	plus = 0;
	while (str[i] >= '0' && str[i] <= '9')
		plus = plus * 10 + str[i++] - 48;
	if (minus == 1)
		plus *= -1;
	return (plus);
}
