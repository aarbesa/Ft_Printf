/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <aabdyli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:58:06 by arbesa            #+#    #+#             */
/*   Updated: 2022/12/28 13:24:44 by aabdyli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexa_snd(unsigned int nb)
{
	char	*min_base_exa;
	int		len;

	len = 0;
	min_base_exa = "0123456789ABCDEF";
	if (nb < 16)
	{
		len = len + ft_putchar(min_base_exa[nb]);
	}
	else
	{
		len = len + ft_hexa_snd(nb / 16);
		len = len + ft_hexa_snd(nb % 16);
	}
	return (len);
}
