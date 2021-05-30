NAME	=	libftprintf.a
CFLAGS	=	-Wall -Werror -Wextra
SRCS	=	src/printf.c \
			src/conversion.c \
			src/width.c \
			src/ft_numlen.c \
			libft/ft_atoi.c \
			libft/ft_putchar_fd.c \
			libft/ft_putnbr_fd.c \
			libft/ft_strchr.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

compile:
			gcc $(CFLAGS) $(SRCS) main.c -o ft_printf
clean:
			rm -f $(OBJS)

fclean:
			rm -f compile

re:
			fclean $(NAME)

.PHONY:		all clean fclean re
