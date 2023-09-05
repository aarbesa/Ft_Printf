# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdyli <aabdyli@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 12:59:26 by aabdyli           #+#    #+#              #
#    Updated: 2022/12/28 16:30:00 by aabdyli          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			=   ft_print_c.c \
				   	ft_print_i.c \
					ft_print_p.c \
				   	ft_print_s.c \
					ft_print_u.c \
				    ft_print_x.c \
				   	ft_print_xx.c \
				   	ft_printf.c

SRCS_DIR		=	sources/

SRCS			:=	$(addprefix $(SRCS_DIR),$(SRCS))
OBJS			=	$(SRCS:.c=.o)

NAME			=	libftprintf.a
HEADER_DIR		=	includes/
CC				=	gcc
RM				=	rm -f
LIBC			=	ar rc
CFLAGS			=	-Wall -Wextra -Werror

%.o: %.c $(HEADER_DIR) Makefile
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_DIR)

all:			$(NAME)

$(NAME):		 $(OBJS)
				$(LIBC) $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:			all clean fclean re