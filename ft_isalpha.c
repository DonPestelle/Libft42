/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:45:34 by pestelle          #+#    #+#             */
/*   Updated: 2023/10/07 16:03:23 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main()
{
    char str = '4';

    if (ft_isalpha(str))
    {
        write(1, "Es una letra alfabética\n", 25);
    }
    else
    {
        write(1, "No es una letra alfabética\n", 29);
    }

    return (0);
}*/