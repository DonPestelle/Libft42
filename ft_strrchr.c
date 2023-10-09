/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:15:24 by pestelle          #+#    #+#             */
/*   Updated: 2023/10/07 12:14:19 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			x;

	i = 0;
	x = ((char)c);
	while (s[i] != '\0')
	{
		i++;
	}
	while (i > 0)
	{
		if (s[i] == x)
		{
			return (&((char *)s)[i]);
		}
		i--;
	}
	if (i == 0)
	{
		if (s[i] == x)
			return (&((char *)s)[i]);
	}
	return (0);
}
