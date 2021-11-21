/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 18:04:37 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/21 16:27:30 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_int(va_list ap)
{
	char	*str;
	int		i;

	i = va_arg(ap, int);
	str = ft_itoa(i);
	ft_putstr(str);
	free(str);
}
