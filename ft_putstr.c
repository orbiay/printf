/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orbiay <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:09:16 by orbiay            #+#    #+#             */
/*   Updated: 2021/11/29 12:12:58 by orbiay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str || str == NULL)
	{
		write(1, "(null)", 6);
		return (i + 6);
	}
	else
	{
		while (str[i])
		{
			write(1, &str[i], 1);
			i++;
		}
	}
	return (i);
}
/*int main ()
{
    char tab[] = "oussama";
    int i = ft_putstr(tab);
    printf("\n%d",i);
}*/
