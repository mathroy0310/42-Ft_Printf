/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maroy <maroy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:02:11 by marvin            #+#    #+#             */
/*   Updated: 2022/11/22 13:04:20 by maroy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(const char *str, int *count)
{
	int	i;

	if (!str)
		*count += write(1, "(null)", 6);
	else
	{
		i = 0;
		while (str[i])
			ft_putchar(str[i++], count);
	}
}
