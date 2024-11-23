/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:37:56 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/21 15:44:40 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	char	*dst;
	char	*src;
	size_t	i;

	dst = (char *)to;
	src = (char *)from;
	i = 0;
	if (dst == src)
		return (dst);
	while (i < numBytes)
	{
		dst[i] = src[i];
		i++;
	}
	return (to);
}
