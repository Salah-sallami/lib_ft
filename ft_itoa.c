/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:37:43 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/02 11:37:44 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_number(int n)
{
	int	len;

	len = 1;
	while (n > 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*push_allocation(int len, int temp, int muns)
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
		if (muns == -1)
			p[0] = '-';
	}
	return (p);
}

char	*ft_itoa(int n)
{
	int	len;
	int	temp;
	int	muns;

	len = 0;
	muns = 1;
	if (n < 0)
	{
		n *= -1;
		muns = -1;
	}
	temp = n;
	len = len_number(n);
	if (muns == 1)
		len += 0;
	else
		len += 1;
	return (push_allocation(len, temp, muns));
}
// char *p = malloc(sizeof(char) * (len + 1));
// if (!p)
// 	return NULL;
// int i = 0;
// char c;
// int t;
// p[len] = '\0';
// while (i < len)
// {
// 	t = temp % 10;
// 	temp = temp / 10;
// 	c = t + '0';
// 	len--;
// 	p[len] = c;
// 	if (muns == -1)
// 		p[0] = '-';
// }