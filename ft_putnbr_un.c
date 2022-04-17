/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_un.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:30:55 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/29 12:36:51 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static	int	calcul(unsigned int n)
{
	int	count;

	count = 0;
	if (n <= 0)
	{
		n = n * (-1);
		count++;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

int	ft_putnbr_un(unsigned int n)
{
	unsigned int	nb;
	unsigned int	z;

	nb = n;
	z = 0;
	if (n >= 0 && n <= 9)
	{
		z = n + 48;
		write(1, &z, 1);
	}
	if (n > 9)
	{
		ft_putnbr_un(n / 10);
		ft_putnbr_un(n % 10);
	}
	return (calcul(nb));
}
/* int main ()
{
    int n;
    int i = 0;
    n = 1;
    i = ft_putnbr_un(n);
    //printf("%s",ft_putnbr_un(n));
   printf("\n%d",i);
}*/
