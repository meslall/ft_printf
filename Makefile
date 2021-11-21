NAME	= libftprintf.a

SRCS	= ft_char.c ft_hexa.c ft_int.c ft_integer.c ft_itoa.c ft_pointer.c ft_printf.c \
			ft_putchar.c ft_putstr.c ft_string.c ft_unsigned.c ft_strdup.c ft_strlen.c\

OBJS	= $(SRCS:.c=.o)


ICLS	= ftprintf.h

CC		= @gcc -c

CFLAGS	= -Wall -Wextra -Werror

AR	= @ar -rc

RM		= @rm -f


all:		$(NAME)

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			@echo "FTPRINTF CREATED !"


clean:
			$(RM) $(OBJS) $(BONUS_O)
			@echo "Objects Deleted!"

fclean:		clean
			$(RM) $(NAME)
			@echo "Project File Deleted!"

re:			fclean all
