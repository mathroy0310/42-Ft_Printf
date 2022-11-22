/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:01:29 by marvin            #+#    #+#             */
/*   Updated: 2022/11/22 13:04:13 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", count);
		return ;
	}
	if (n < 0)
	{
		n = -n;
		ft_putchar(('-'), count);
	}
	if (n >= 10)
		ft_putnbr(n / 10, count);
	ft_putchar(n % 10 + 48, count);
}
