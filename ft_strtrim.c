/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:39:29 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/02 11:39:30 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

int	first_c(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
			break ;
		i++;
	}
	return (i);
}

int	last_c(char const *s1, char const *set)
{
	int	j;
	int	k;

	j = 0;
	k = ft_strlen(s1) - 1;
	while (s1[k] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[k] == set[j])
				break ;
			j++;
		}
		if (set[j] == '\0')
		{
			k++;
			break ;
		}
		k--;
	}
	return (k);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		i;
	int		k;

	i = first_c(s1, set);
	k = last_c(s1, set);
	p = malloc((k - i) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	p = ft_substr(s1, i, (k - i));
	return (p);
}
