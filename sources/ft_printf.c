/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <aabdyli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 13:58:52 by arbesa            #+#    #+#             */
/*   Updated: 2022/12/28 13:27:46 by aabdyli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_core(va_list *args, char c)
{
	int		count;

	count = 0;
	if (c == 'c')
		count = count + ft_putchar(va_arg(*args, int));
	else if (c == 's')
		count = count + ft_putstr(va_arg(*args, char *));
	else if (c == 'd' || c == 'i')
		count = count + ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		count = count + ft_putnbr_snd(va_arg(*args, unsigned int));
	else if (c == 'x')
		count = count + ft_hexa(va_arg(*args, unsigned int));
	else if (c == 'X')
		count = count + ft_hexa_snd(va_arg(*args, unsigned int));
	else if (c == 'p')
		count = count + ft_pointers_snd(va_arg(*args, unsigned long long));
	else if (c == '%')
		count = count + ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list		args;
	int			count;
	int			i;

	i = 0;
	count = 0;
	va_start(args, str);
	if (write(1, 0, 0) < 0)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			count = count + ft_core(&args, str[i + 1]);
			i++;
		}
		else
			count = count + ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (count);
}
