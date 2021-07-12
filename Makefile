NAME	=	libftprintf.a
CFLAGS	=	-Wall -Werror -Wextra
SRCS	=	mandatory/libft/ft_isdigit.c \
			mandatory/libft/ft_putchar_fd.c \
			mandatory/libft/ft_putlong_fd.c \
			mandatory/libft/ft_putnbr_fd.c \
			mandatory/libft/ft_putstr_fd.c \
			mandatory/libft/ft_strchr.c \
			mandatory/libft/ft_strdup.c \
			mandatory/libft/ft_strlen.c \
			mandatory/src/print/print_c.c \
			mandatory/src/print/print_id.c \
			mandatory/src/print/print_p.c \
			mandatory/src/print/print_perc.c \
			mandatory/src/print/print_x.c \
			mandatory/src/print/print_u.c \
			mandatory/src/print/print_s.c \
			mandatory/src/conversion.c \
			mandatory/src/numlen.c \
			mandatory/src/printf.c \

SRCS_B	=	bonus/src/printf.c \
			bonus/src/conversion.c \
			bonus/src/width.c \
			bonus/src/numlen.c \
			bonus/src/flag.c \
			bonus/libft/ft_atoi.c \
			bonus/libft/ft_putchar_fd.c \
			bonus/libft/ft_putnbr_fd.c \
			bonus/libft/ft_strchr.c \
			bonus/libft/ft_putlong_fd.c \
			bonus/libft/ft_strlen.c \
			bonus/libft/ft_strdup.c \
			bonus/libft/ft_putstr_fd.c \
			bonus/libft/ft_isdigit.c \
			bonus/libft/ft_putstr_precision.c \
			bonus/src/print/print_u.c \
			bonus/src/print/print_c.c \
			bonus/src/print/print_s.c \
			bonus/src/print/print_x.c \
			bonus/src/print/print_p.c \
			bonus/src/print/print_id.c \
			bonus/src/print/print_perc.c \
			bonus/src/width/print_width_str.c \
			bonus/src/width/print_width_int.c \
			bonus/src/width/print_width_unsigned.c \

OBJS	=	$(SRCS:.c=.o)

OBJS_B	=	$(SRCS_B:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

compile:
			gcc $(CFLAGS) $(SRCS_B) main.c -o ft_printf

clean:
			rm -f $(OBJS) $(OBJS_B)

fclean:
			rm -f $(OBJS) $(OBJS_B) libftprintf.a ft_printf

re:			fclean $(NAME)

bonus:		$(OBJS_B)
			ar rcs libftprintf.a $(OBJS_B)

.PHONY:		all compile clean fclean re bonus
