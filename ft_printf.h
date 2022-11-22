/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 22:03:06 by marvin            #+#    #+#             */
/*   Updated: 2022/11/22 15:23:15 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

void	ft_print(va_list args, const char *format, int *count, int *i);
int		ft_printf(const char *format, ...);
void	ft_putchar(int c, int *count);
void	ft_putnbr(int n, int *count);
void	ft_putunbr(unsigned int n, int *count);
void	ft_putstr(const char *str, int *count);
void	ft_puthex(unsigned long n, int *count);
void	ft_putuphex(unsigned long n, int *count);
void	ft_putpointer(void *ptr, int *count);
size_t	ft_strlen(const char *s);

#endif