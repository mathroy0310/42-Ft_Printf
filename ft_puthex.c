/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:03:56 by maroy             #+#    #+#             */
/*   Updated: 2022/11/22 13:10:58 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(int n, int *count)
{
	if (n > 9)
	{
		if (n < 16)
			ft_putchar((n + 87), count);
		else
		{
			ft_putuphex((n / 16), count);
			ft_putuphex((n % 16), count);
		}
	}
	else
		ft_putchar((n + 48), count);
}
