/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:06:40 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/21 16:28:15 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_unsigned(va_list ap)
{
	char			*str;
	unsigned int	unsi;

	unsi = va_arg(ap, unsigned int);
	str = ft_itoa(unsi);
	ft_putstr(str);
	free (str);
}
