/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omeslall <omeslall@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 17:29:31 by omeslall          #+#    #+#             */
/*   Updated: 2021/11/22 17:30:02 by omeslall         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include<stdarg.h>
# include<string.h>
# include<unistd.h>
# include<stdlib.h>

int		g_return;
char	*ft_itoa(long n);
int		ft_printf(const char *str, ...);
void	ft_putchar(char c);
void	ft_putstr(char *s);
int		ft_count_numbers(int n);
void	ft_hexa(va_list ap, char x);
void	ft_putnbr(int n);
void	ft_integer(va_list ap);
void	ft_string(va_list ap);
void	ft_char(va_list ap);
void	ft_pointer(va_list ap);
void	ft_int(va_list ap);
void	ft_unsigned(va_list ap);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *str);

#endif