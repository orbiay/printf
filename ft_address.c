/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_address.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 21:31:14 by orbiay            #+#    #+#             */
/*   Updated: 2021/12/04 19:10:07 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	calcul(int *tab, int i)
{
	int	c;

	while (i >= 0)
	{
		c = tab[i];
		if (c > 9)
		{
			c = c + 87;
			write (1, &c, 1);
		}
		else
		{
			c = c + 48;
			write (1, &c, 1);
		}
		i--;
	}
}

static	int	ft_putnbr_base_low(unsigned long nb)
{
	int		tab[16];
	int		i;

	i = 0;
	while (nb > 0)
	{
		tab[i] = nb % 16;
		nb = nb / 16;
		i++;
	}
	i--;
	calcul(tab, i);
	return (i + 1);
}

int	ft_address(void *nb)
{
	int					i;
	unsigned long long	n;

	n = (unsigned long long )nb;
	i = 0;
	//i += ft_putstr("0x");
	i += ft_putnbr_base_low(n);
	if (n == 0)
		i += ft_putchar('0');
	return (i);
}
int main()
{
    
    ft_address(1024);
}
