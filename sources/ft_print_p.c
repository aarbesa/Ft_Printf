/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <aabdyli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:45:42 by arbesa            #+#    #+#             */
/*   Updated: 2022/12/28 13:22:42 by aabdyli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_pointers(unsigned long long nb)
{
	int		len;
	char	*min_base_exa;

	min_base_exa = "0123456789abcdef";
	len = 0;
	if (nb < 16)
	{
		len = len + ft_putchar(min_base_exa[nb]);
		return (len);
	}
	else
	{
		len = len + ft_pointers(nb / 16);
		len = len + ft_pointers(nb % 16);
	}
	return (len);
}

int	ft_pointers_snd(unsigned long long nb)
{
	int	a;

	write(1, "0x", 2);
	a = 2 + ft_pointers(nb);
	return (a);
}
