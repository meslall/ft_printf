/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/20 17:59:01 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/21 16:28:05 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_string(va_list ap)
{
	char	*string;

	string = va_arg(ap, char *);
	if (!string)
		ft_putstr("(null)");
	ft_putstr(string);
}
