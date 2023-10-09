/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:14:46 by pestelle          #+#    #+#             */
/*   Updated: 2023/10/07 13:40:35 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*byte_s1;
	const unsigned char	*byte_s2;

	if (n == 0)
	{
		return (0);
	}
	byte_s2 = s2;
	byte_s1 = s1;
	if (*byte_s1 < *byte_s2)
		return (-1);
	else if (*byte_s1 > *byte_s2)
		return (1);
	return (ft_memcmp(byte_s1 + 1, byte_s2 + 1, n - 1));
}
