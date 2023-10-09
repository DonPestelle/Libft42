/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:14:25 by pestelle          #+#    #+#             */
/*   Updated: 2023/10/03 16:22:19 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;
	char	c;

	if (!s)
		return ;
	i = 0;
	while (i != ft_strlen(s))
	{
		c = s[i];
		write(fd, &c, 1);
		i++;
	}
}
