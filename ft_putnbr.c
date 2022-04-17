/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:13:21 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/29 13:16:15 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static	int	calcul(int nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		nb = nb * (-1);
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

int	ft_putnbr(int n)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
	}
	if (nb >= 0 && nb <= 9)
		ft_putchar(nb + 48);
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (calcul(n));
}
/*int main ()
{
    long n;
    n = -2147483648;
    //ft_putnbr(n);
    int i ;
     i = ft_putnbr(n);
    printf("\n%d\n",i);
    //printf("\n%d\n",calcul(n));
    //printf("%d",calcul(n));
}*/
