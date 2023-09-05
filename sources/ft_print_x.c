/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <aabdyli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:57:35 by arbesa            #+#    #+#             */
/*   Updated: 2022/12/28 13:14:32 by aabdyli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_hexa(unsigned int nb)
{
	int		len;
	char	*min_base_exa;

	min_base_exa = "0123456789abcdef";
	len = 0;
	if (nb < 16)
	{
		len = len + ft_putchar(min_base_exa[nb]);
	}
	else
	{
		len = len + ft_hexa(nb / 16);
		len = len + ft_hexa(nb % 16);
	}
	return (len);
}
