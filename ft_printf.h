/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melmarti <melmarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 11:42:56 by melmarti          #+#    #+#             */
/*   Updated: 2023/11/23 11:43:46 by melmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_base_16(unsigned int nbr);
int	ft_base_16_maj(unsigned long int nb);
int	ft_putnbr(int nbr);
int	ft_print_0x(void);
int	ft_putunbr(unsigned int nbr);
int	ft_ptr_null(unsigned long long nbr);

#endif
