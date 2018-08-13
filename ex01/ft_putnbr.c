/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 07:24:29 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/11 07:24:42 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <limits.h>

void    ft_putchar(char c);

void    print_int_max(void)
{
    ft_putchar('2');
    ft_putchar('1');
    ft_putchar('4');
    ft_putchar('7');
    ft_putchar('4');
    ft_putchar('8');
    ft_putchar('3');
    ft_putchar('6');
    ft_putchar('4');
    ft_putchar('7');
}

void    print_int_min(void)
{
    ft_putchar('-');
    ft_putchar('2');
    ft_putchar('1');
    ft_putchar('4');
    ft_putchar('7');
    ft_putchar('4');
    ft_putchar('8');
    ft_putchar('3');
    ft_putchar('6');
    ft_putchar('4');
    ft_putchar('8');
}

void    ft_putnbr(int nbr)
{
    if (nbr == INT_MAX)
        print_int_max();
    else if (nbr == INT_MIN)
        print_int_min();
    else if (nbr < 0)
    {
        ft_putchar('-');
        ft_putnbr(-nbr);
    }
    else if (nbr > 9)
    {
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else
        ft_putchar(nbr + '0');
}
