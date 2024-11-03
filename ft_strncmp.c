/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:39:16 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/02 11:39:17 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	loop;

	loop = 1;
	while (*s1 == *s2)
	{
		if ((*s1 == '\0' && *s2 == '\0') || loop >= n)
			return (0);
		s1++;
		s2++;
		loop++;
	}
	return (*s1 - *s2);
}
