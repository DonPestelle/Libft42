/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:14:10 by pestelle          #+#    #+#             */
/*   Updated: 2023/10/03 16:22:22 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;
	char	x;

	if (!s)
		return ;
	i = 0;
	while (i != ft_strlen(s))
	{
		x = s[i];
		write(fd, &x, 1);
		i++;
	}
	write(fd, "\n", 1);
}
