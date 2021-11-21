/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:03:32 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/21 16:40:57 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_put_pointer(unsigned long pointer)
{
	if (pointer == 0)
		return ;
	ft_put_pointer(pointer / 16);
	if ((pointer % 16) <= 9)
		ft_putchar((pointer % 16) + 48);
	else if ((pointer % 16) >= 10)
		ft_putchar((pointer % 16) + 87);
}

void	ft_pointer(va_list ap)
{
	unsigned long	pointer;

	pointer = (unsigned long) va_arg(ap, void *);
	ft_putstr("0x");
	if (pointer == 0)
		ft_putchar('0');
	ft_put_pointer(pointer);
}
