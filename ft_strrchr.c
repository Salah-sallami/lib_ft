/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:39:25 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/04 17:20:54 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		vld;
	int		i;

	vld = 0;
	p = NULL;
	p = (char *)s;
	i = ft_strlen(p);
	while (i >= 0)
	{
		if (p[i] == (char)c)
		{
			vld = 1;
			break ;
		}
		i--;
	}
	if (vld == 1)
		return (p + i);
	else
		return (NULL);
}
