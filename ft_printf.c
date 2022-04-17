/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:59:41 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/29 12:06:11 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_case(char al, va_list ap)
{
	if (al == 'd' || al == 'i')
		return (ft_putnbr(va_arg(ap, int)));
	else if (al == 'c')
		return (ft_putchar(va_arg(ap, int)));
	else if (al == 's')
		return (ft_putstr(va_arg(ap, char *)));
	else if (al == 'u')
		return (ft_putnbr_un(va_arg(ap, unsigned int)));
	else if (al == 'X')
		return (ft_putnbr_base_upper(va_arg(ap, unsigned int)));
	else if (al == 'x')
		return (ft_putnbr_base_lower(va_arg(ap, unsigned int)));
	else if (al == 'p')
		return (ft_address(va_arg(ap, void *)));
	else if (al == '%')
		return (ft_putchar(al));
	return (0);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		rest;
	va_list	ap;

	va_start(ap, s);
	rest = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			rest += ft_case(s[i + 1], ap);
			i += 2;
		}
		else
		{
			write(1, &s[i], 1);
			rest++;
			i++;
		}
	}
	va_end(ap);
	return (rest);
}
// int main ()
// {
//    // char tab[] = "oussama";
// //    int i;
// //   int v;
// //    char tab = 'i';
// //     i = ft_printf(" oussama how are u %s chihaja 
// machi hiya hadik %p\n","good",1024);
// //    ft_printf("%d\n",i);
// //     v = printf(" oussama how are u %s
// chihaja machi hiya hadik %p\n","good",1024);
// //     printf("\n%d",v);

//     int b;

//     b = -9;
//     printf(">>%d<<\n",ft_printf("%d", b));
// }
