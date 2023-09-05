/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <aabdyli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:45:15 by arbesa            #+#    #+#             */
/*   Updated: 2022/12/09 14:43:10 by aabdyli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr(int nb)
{
	int		len;

	len = 0;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (len + 11);
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		len++;
	}
	if (nb > 9)
	{
		len = len + ft_putnbr(nb / 10);
		len = len + ft_putnbr(nb % 10);
	}
	else
	{
		len = len + ft_putchar(nb + 48);
	}
	return (len);
}
