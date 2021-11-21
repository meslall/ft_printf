/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 11:58:42 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/21 17:15:07 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_put_hexa(unsigned int hexa, int flag)
{
	if (hexa == 0)
		return ;
	ft_put_hexa((hexa / 16), flag);
	if ((hexa % 16) <= 9)
		ft_putchar((hexa % 16) + 48);
	else if ((hexa % 16) >= 10 && flag == 0)
		ft_putchar((hexa % 16) + 87);
	else if ((hexa % 16) >= 10 && flag == 1)
		ft_putchar((hexa % 16) + 55);
}

void	ft_hexa(va_list ap, char x)
{
	unsigned int	hexa;
	int				flag;

	if (x == 'x')
		flag = 0;
	else
		flag = 1;
	hexa = va_arg(ap, unsigned int);
	if (hexa == 0)
		ft_putchar('0');
	ft_put_hexa(hexa, flag);
}
