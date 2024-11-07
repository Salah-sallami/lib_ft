/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:37:59 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/07 10:34:26 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p1;
	char	*p2;
	size_t	i;

	p1 = (char *)dst;
	p2 = (char *)src;
	if (!p1 && !p2)
		return (NULL);
	i = 0;
	if (p1 > p2)
	{
		while (len-- > 0)
			p1[len] = p2[len];
	}
	else
	{
		while (i < len)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	return (dst);
}
