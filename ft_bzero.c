/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:49:29 by pestelle          #+#    #+#             */
/*   Updated: 2023/10/03 16:22:40 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*p;

	if (n > 0)
	{
		p = (char *)s;
		*p = 0;
		ft_bzero(p + 1, n - 1);
	}
}
