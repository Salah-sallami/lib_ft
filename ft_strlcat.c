/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:39:04 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/03 11:53:56 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		j;
	size_t	len;

	if (ft_strlen(dst) == 0)
		len = 0;
	else
	{
		if (ft_strlen(dst) < dstsize)
			len = ft_strlen(dst);
		else
			len = dstsize;
	}
	i = ft_strlen(dst);
	j = 0;
	if (dstsize == 0)
		dst[0] = '\0';
	else
	{
		while (i < dstsize - 1)
			dst[i++] = src[j++];
		dst[i] = '\0';
	}
	return (ft_strlen(src) + len);
}
