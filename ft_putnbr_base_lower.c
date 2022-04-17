/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <orbiay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:20:57 by orbiay            #+#    #+#             */
/*   Updated: 2021/12/04 19:10:28 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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

int	ft_putnbr_base_lower(unsigned int nb)
{
	int	tab[16];
	int	counter;
	int	i;

	i = 0;
	counter = 0;
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (nb > 0)
	{
		tab[i] = nb % 16;
		nb = nb / 16;
		i++;
		counter++;
	}
	i--;
	calcul(tab, i);
	return (counter);
}
int main ()
{
    int i;
    //i = ft_putnbr_base_lower(1024);
     ft_putnbr_base_lower(1024);

   // int x = printf("%x",1024);
    //printf("\n-----------******%d******%d*****------", i,x);
    // dert i-- f fucntion putnbr 7itach kat printy liya wa7ed 0 i don'y know why
}

int ft_hexa(unsigned int nb)
{
    char *tab = "123456789abcdef";
    int counter = 0;
    if (nb >= 16)
        counter += ft_hexa(nb/16);
    counter += write(1, &tab[nb%16], 1);
    return(counter);
}
