/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssallami <ssallami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 10:11:52 by ssallami          #+#    #+#             */
/*   Updated: 2024/11/19 21:50:28 by ssallami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	nl;

	if (fd < 0)
		return ;
	if (!s)
		return ;
	nl = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &nl, 1);
}
