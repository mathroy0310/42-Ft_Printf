/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 21:56:46 by marvin            #+#    #+#             */
/*   Updated: 2022/11/16 21:56:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include "libft.h"

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		n;

	va_start(args, format);
	i = 0;
	count = 0;
	n = ft_strlen(format);
	while (format[i] && i < n)
	{
		if (format[i] != '%')
			ft_putchar(format[i++], &count);
		else if (i < n)
		{
			i++;
			ft_print(args, format, &count, &i);
		}
	}
	va_end (args);
	return (count);
}

void	ft_print(va_list args, const char *format, int *count, int *i)
{
	if (format[*i] == '%')
		ft_putchar(format[*i], count);
	else if (format[*i] == 'c') //%c Prints a single character.
		ft_putchar(va_arg(args, int), count);
	else if (format[*i] == 's') //%s Prints a string (as defined by the common C convention).
		ft_putstr(va_arg(args, char *), count);
    else if (format[*i] == 'p') //%p The void * pointer argument has to be printed in hexadecimal format.
		ft_putpointer(va_arg(args, void *), count);
	else if (format[*i] == 'd' || format[*i] == 'i') //%d Prints a decimal (base 10) number ||  %i Prints an integer in base 10.
		ft_putnbr(va_arg(args, int), count);
	else if (format[*i] == 'u') //%u Prints an unsigned decimal (base 10) number.
		ft_putunbr(va_arg(args, unsigned int), count);
	else if (format[*i] == 'x') //%x Prints a number in hexadecimal (base 16) lowercase format.
		ft_puthex(va_arg(args, unsigned int), count);
	else if (format[*i] == 'X') //%X Prints a number in hexadecimal (base 16) uppercase format.
		ft_putuphex(va_arg(args, unsigned int), count);
	*i += 1;
}