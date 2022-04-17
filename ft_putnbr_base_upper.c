/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_upper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:25:29 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/29 12:30:21 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	calcul(int *tab, int i)
{
	int	c;

	while (i >= 0)
	{
		c = tab[i];
		if (c > 9)
		{
			c = c + 55;
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

int	ft_putnbr_base_upper(unsigned int nb)
{
	int	tab[16];
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (nb > 0)
	{
		tab[i] = nb % 16;
		nb = nb / 16;
		count++;
		i++;
	}
	i--;
	calcul(tab, i);
	return (count);
}
/*int main ()
{
    int i;
    //i = putnbr_base(1024);
    i = 0;
    int w = ft_printf("%X",i);
    printf("%d\n",w);
    // dert i-- f fucntion putnbr 7itach kat printy liya wa7ed 0 i don'y know why
}*/
