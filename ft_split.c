/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 11:27:21 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/05 13:38:47 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_len_c(char const *s, char c)
{
	int	len_c;
	int	i;

	len_c = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			len_c++;
		i++;
	}
	return (len_c);
}

char	**push_arrays(char const *s, char **arrays, char c)
{
	int	len_c;
	int	i;
	int	j;
	int	k;

	len_c = ft_len_c(s, c);
	i = 0;
	j = 0;
	k = 0;
	while (i <= len_c)
	{
		j = 0;
		while (s[k] != c && s[j] != '\0')
		{
			arrays[i][j] = s[k];
			k++;
			j++;
		}
		k++;
		i++;
	}
	return (arrays);
}

char	**allocation(char const *s, char **arrays, char c)
{
	int	len_c;
	int	i;
	int	l;
	int	j;

	len_c = ft_len_c(s, c);
	i = 0;
	l = 0;
	j = 0;
	while (i <= len_c)
	{
		while (s[j])
		{
			l++;
			j++;
			if (s[j] == c || s[j] == '\0')
				break ;
		}
		arrays[i] = malloc(sizeof(char) * (l));
		arrays[i][l] = '\0';
		l = -1;
		i++;
	}
	return (arrays);
}

char	**ft_split(char const *s, char c)
{
	int		len_c;
	int		i;
	int		j;
	char	**arrays;

	len_c = ft_len_c(s, c);
	i = 0;
	j = 0;
	if (len_c == 0)
		return (NULL);
	arrays = malloc(sizeof(char *) * (len_c + 1));
	arrays = allocation(s, arrays, c);
	arrays = push_arrays(s, arrays, c);
	// printf("%c ///\n", arrays[2][0]);
	while (i <= len_c)
	{
		free(arrays[i]);
		i++;
	}
	free(arrays);
	return (arrays);
}
