# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/09/15 18:01:23 by xvoorvaa      #+#    #+#                  #
#    Updated: 2022/01/24 15:29:24 by xvoorvaa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	ft_printf
CFLAGS			=	-Wall -Werror -Wextra
LEAKS			=	-g3 -fsanitize=address
OBJS			=	$(SRCS:.c)
SRCS			=	main.c \
					SRC/utils/printf.c \
					SRC/libft/ft_atoi.c \
					SRC/libft/ft_putchar_fd.c \
					SRC/libft/ft_putnbr_fd.c \
					SRC/libft/ft_strchr.c \
					SRC/libft/ft_putlong_fd.c \
					SRC/libft/ft_strlen.c \
					SRC/libft/ft_strdup.c \
					SRC/libft/ft_putstr_fd.c \
					SRC/libft/ft_isdigit.c \
					SRC/libft/ft_putstr_precision.c \
					SRC/utils/conversion.c \
					SRC/utils/width.c \
					SRC/utils/numlen.c \
					SRC/utils/flag.c \
					SRC/utils/print/print_u.c \
					SRC/utils/print/print_c.c \
					SRC/utils/print/print_s.c \
					SRC/utils/print/print_x.c \
					SRC/utils/print/print_p.c \
					SRC/utils/print/print_id.c \
					SRC/utils/print/print_perc.c \
					SRC/utils/width/print_width_str.c \
					SRC/utils/width/print_width_int.c \
					SRC/utils/width/print_width_unsigned.c \

GREEN			=	\033[1;32m
BLUE			=	\033[1;36m
RED				=	\033[0;31m
NC				=	\033[0m # No Color

MESSAGE			= "$(BLUE)---\nCompiling done! Run ./$(NAME)\n---$(NC)"
COMP_MESSAGE	= "$(GREEN)Building C object... $(NC)%-33.33s\r\n"
REM_MESSAGE		= "$(RED)Removing files...$(NC)"

all:		$(NAME)

$(NAME):	$(OBJS)
	@gcc $(CFLAGS) $(SRCS) -o $(NAME)
	@printf $(COMP_MESSAGE) $(SRCS)
	@echo $(MESSAGE)

leaks:
	@gcc $(CFLAGS) $(SRCS) $(LEAKS) -o $(NAME)
	@printf $(COMP_MESSAGE) $(SRCS)
	@echo $(MESSAGE)

clean:
	@echo "\n"
	@rm -f $(OBJS)
	@printf $(REM_MESSAGE)
	@echo "\n"


fclean:		clean
	@rm -f $(NAME)
	@rm -rf $(NAME).dSYM

re:			fclean all

.PHONY:		all leaks clean fclean re
