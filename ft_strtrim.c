/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:15:41 by pestelle          #+#    #+#             */
/*   Updated: 2023/10/07 12:14:36 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*x;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
	{
		s1++;
	}
	if (*s1 == '\0')
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (ft_strchr(set, s1[len]))
	{
		len--;
	}
	x = ft_substr(s1, 0, len + 1);
	return (x);
}
