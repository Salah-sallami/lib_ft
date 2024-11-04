/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:38:50 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/04 16:59:29 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int		vld;

	vld = 0;
	p = NULL;
	p = (char *)s;
	while (*p)
	{
		if (*p == (char)c)
		{
			vld = 1;
			break ;
		}
		p++;
	}
	if (vld == 1)
	{
		return (p);
	}
	if (*p == (char)c)
		return (p);
	else
		return (NULL);
}
