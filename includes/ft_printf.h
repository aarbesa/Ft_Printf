/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabdyli <aabdyli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 14:29:31 by aabdyli           #+#    #+#             */
/*   Updated: 2022/12/28 13:27:33 by aabdyli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int		ft_putchar(int c);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);
int		ft_core(va_list *args, char c);
int		ft_printf(const char *str, ...);
int		ft_putnbr_snd(unsigned int nb);
int		ft_hexa(unsigned int nb);
int		ft_hexa_snd(unsigned int nb);
int		ft_pointers(unsigned long long nb);
int		ft_pointers_snd(unsigned long long nb);

#endif
