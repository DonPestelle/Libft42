/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:15:05 by pestelle          #+#    #+#             */
/*   Updated: 2023/10/07 19:27:19 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char			*x;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	x = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(x))
		return (NULL);
	while (i != ft_strlen(s))
	{
		x[i] = (*f)(i, s[i]);
		i++;
	}
	x[i] = '\0';
	return (x);
}
/*char custom_function(unsigned int index, char c)
{
    if (c >= 'a' && c <= 'z')
        return c - 32; // Convierte minúsculas a mayúsculas
    return c;
}

int main()
{
    char input[] = "Hello, World!";
    char *result = ft_strmapi(input, custom_function);

    if (result)
    {
        printf("Resultado: %s\n", result);
        free(result); // Liberar la memoria asignada por ft_strmapi
    }
    else
    {
        printf("Error: No se pudo asignar memoria.\n");
    }

    return 0;
}*/