/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:57:22 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/21 16:27:34 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_integer(va_list ap)
{
	int		integer;
	char	*str;

	integer = va_arg(ap, int);
	str = ft_itoa(integer);
	ft_putstr(str);
	free(str);
}
