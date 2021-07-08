NAME	=	libftprintf.a
CFLAGS	=	-Wall -Werror -Wextra
SRCS	=	src/printf.c \
			src/conversion.c \
			src/width.c \
			src/numlen.c \
			src/flag.c \
			src/print/print_id.c \
			libft/ft_atoi.c \
			libft/ft_putchar_fd.c \
			libft/ft_putnbr_fd.c \
			libft/ft_strchr.c \
			libft/ft_putlong_fd.c \
			libft/ft_strlen.c \
			libft/ft_strdup.c \
			libft/ft_putstr_fd.c \
			libft/ft_isdigit.c \
			libft/ft_putstr_precision.c \
			src/print/print_u.c \
			src/print/print_c.c \
			src/print/print_s.c \
			src/print/print_x.c \
			src/print/print_p.c \
			src/print/print_perc.c \
			src/width/print_width_str.c \
			src/width/print_width_int.c \
			src/width/print_width_unsigned.c \

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

compile:
			gcc $(CFLAGS) $(SRCS) main.c -o ft_printf

clean:
			rm -f $(OBJS)

fclean:
			rm -f $(OBJS) libftprintf.a

re:			fclean $(NAME)

.PHONY:		all clean fclean re
