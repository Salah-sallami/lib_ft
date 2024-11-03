/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:37:50 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/02 11:37:51 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	loop;
	char	*p2;
	char	*p1;

	loop = 1;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (*p1 == *p2)
	{
		if ((*p1 == '\0' && *p2 == '\0') || loop >= n)
			return (0);
		p1++;
		p2++;
		loop++;
	}
	return (*p1 - *p2);
}
