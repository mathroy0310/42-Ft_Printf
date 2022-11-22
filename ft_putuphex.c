/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuphex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 12:58:34 by maroy             #+#    #+#             */
/*   Updated: 2022/11/22 13:11:10 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putuphex(int n, int *count)
{
	if (n > 9)
	{
		if (n < 16)
			ft_putchar((n + 55), count);
		else
		{
			ft_putuphex((n / 16), count);
			ft_putuphex((n % 16), count);
		}
	}
	else
		ft_putchar((n + 48), count);
}
