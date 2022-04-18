# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: xvoorvaa <xvoorvaa@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/09/15 18:01:23 by xvoorvaa      #+#    #+#                  #
#    Updated: 2022/04/18 11:56:32 by xander        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME			=	libftprintf.a
CC				=	gcc
CFLAGS			=	-Wall -Wextra -Werror

OBJ_DIR			=	OBJ

FILES			=	ft_printf.c \
					conversion.c \
					libft/ft_atoi.c \
					libft/ft_putchar_fd.c \
					libft/ft_putnbr_fd.c \
					libft/ft_strchr.c \
					libft/ft_strlen.c \
					libft/ft_putstr_fd.c \
					libft/ft_isdigit.c \
					print/print_u.c \
					print/print_c.c \
					print/print_s.c \
					print/print_x.c \
					print/print_p.c \
					print/print_id.c \
					print/print_perc.c


SHELL			:=	/bin/bash
HEADERS			:=	-I INC
SRCS			:=	$(addprefix SRC/, $(FILES))
OBJS			:=	$(SRCS:.c=.o)

PINK = \x1b[35;01m
BLUE = \x1b[34;01m
YELLOW = \x1b[33;01m
GREEN = \x1b[32;01m
RED = \x1b[31;01m
WHITE = \x1b[31;37m
RESET = \x1b[0m

START			=	"\n$(BLUE)---\nStarting...!\n---\n$(RESET)"
MESSAGE			=	"$(BLUE)---\nCompiling done!\n---\n$(RESET)"
COMP_MESSAGE	=	"$(GREEN)Building C object... $(RESET)%-33.33s\r\n"
REM_MESSAGE		=	"$(RED)Removing files...$(RESET)"

all:	$(NAME)

%.o: %.c
	@$(CC) -c $^ -o $@ $(CFLAGS) $(HEADERS)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@printf $(START)
	@printf $(COMP_MESSAGE) $(SRCS)
	@printf $(MESSAGE)

clean:
	@printf $(REM_MESSAGE)
	@rm -rf $(OBJS)


fclean:		clean
	@rm -f $(NAME)
	@rm -rf $(NAME).dSYM

re:			fclean all

.PHONY:		all clean fclean re
