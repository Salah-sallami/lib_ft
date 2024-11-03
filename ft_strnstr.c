/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:39:19 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/03 11:59:48 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	char	*p;
	size_t	i;
	int		j;

	i = 0;
	j = 0;
	p = NULL;
	p = (char *)s1;
	while (i < len)
	{
		if (p[i] == s2[j])
		{
			while (s2[j] == s1[i] && i < len)
			{
				j++;
				i++;
			}
			if (s2[j] == '\0')
				return (p + (i - j));
			else
				i = i - 0;
		}
		i++;
	}
	return (NULL);
}
