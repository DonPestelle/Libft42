/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:14:45 by pestelle          #+#    #+#             */
/*   Updated: 2023/10/07 17:36:30 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	c1;
	size_t	c2;

	c2 = 0;
	c1 = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	s3 = (char *)malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!(s3))
		return (NULL);
	while (c1 != ft_strlen(s1))
	{
		s3[c1] = s1[c1];
		++c1;
	}
	while (c2 != ft_strlen(s2))
	{
		s3[c1 + c2] = s2[c2];
		++c2;
	}
	s3[c2 + c1] = '\0';
	return (s3);
}
