/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 01:48:49 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/21 16:27:46 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

void	ft_putting(char *str, va_list ap)
{
	str++;
	if (*str == 'd')
		ft_integer(ap);
	else if (*str == 's')
		ft_string(ap);
	else if (*str == 'c')
		ft_char(ap);
	else if (*str == 'p')
		ft_pointer(ap);
	else if (*str == 'x' || *str == 'X')
		ft_hexa(ap, *str);
	else if (*str == 'i')
		ft_int(ap);
	else if (*str == 'u')
		ft_unsigned(ap);
	else if (*str == '%')
		ft_putchar('%');
}

void	ft_check(char **chr, va_list ap, int i)
{
	while (((*chr)[++i]) != '\0')
	{
		if ((*chr)[i] != '%')
		{
			ft_putchar((*chr)[i]);
		}
		else if ((*chr)[i] == '%')
		{
			if ((*chr)[i] == 'd' || (*chr)[i] == 's' || (*chr)[i] == 'c'
				|| (*chr)[i] == 'i' || (*chr)[i] == 'u'
				|| (*chr)[i] == '%' || (*chr)[i] == 'p'
				|| (*chr)[i] == 'x' || (*chr)[i] == 'X')
				ft_putting(&(*chr)[i], ap);
			else if ((*chr)[i] == '%')
				ft_putting(&(*chr)[i], ap);
			i++;
		}
	}
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		written_char;
	char	*chr;
	int		i;

	g_return = 0;
	chr = ft_strdup(str);
	i = -1;
	written_char = 0;
	va_start (ap, str);
	ft_check(&chr, ap, i);
	free(chr);
	va_end (ap);
	return (g_return);
}
