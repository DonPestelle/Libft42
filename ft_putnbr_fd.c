/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pestelle <pestelle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 17:14:19 by pestelle          #+#    #+#             */
/*   Updated: 2023/10/07 19:52:14 by pestelle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char x, int fd)
{
	write(fd, &x, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	int long	i;

	i = n;
	if (i < 0)
	{
		write(fd, "-", 1);
		i = i * -1;
	}
	if (i > 9)
		ft_putnbr_fd(i / 10, fd);
	ft_putchar(i % 10 + '0', fd);
}

int main()
{
    int fd = 1; // Usar el descriptor de archivo 1 (STDOUT) para imprimir en la consola
    int numero = 12345; // El número que deseas imprimir

    ft_putnbr_fd(numero, fd); // Llamar a la función para imprimir el número

    return 0;
}
