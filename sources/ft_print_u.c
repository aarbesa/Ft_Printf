/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <aabdyli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:56:36 by arbesa            #+#    #+#             */
/*   Updated: 2022/12/28 13:25:12 by aabdyli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_snd(unsigned int nb)
{
	int		len;

	len = 0;
	if (nb > 9)
	{
		len = len + ft_putnbr_snd(nb / 10);
		len = len + ft_putnbr_snd(nb % 10);
	}
	else
	{
		len = len + ft_putchar(nb + 48);
	}
	return (len);
}
