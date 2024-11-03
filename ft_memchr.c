/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:37:47 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/03 11:59:23 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*p;
	int		vld;
	size_t	loop;

	vld = 2;
	loop = 1;
	p = NULL;
	p = (char *)s;
	while (*p)
	{
		if (loop > n)
			vld = 0;
		if (*p == c)
			vld = 1;
		if (vld == 0 || vld == 1)
			break ;
		p++;
		loop++;
	}
	if (vld == 1)
		return (p);
	else
		return (NULL);
}
