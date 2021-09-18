# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ykassim- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/25 13:48:58 by ykassim-          #+#    #+#              #
#    Updated: 2021/09/18 16:24:52 by ykassim-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = clang
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf

SRC = parse_away.c \
	  check_flag.c \
	  print_arg.c \
	  ft_printf_utils.c \
	  ft_putnbr_party.c \
	  print_c.c \
	  print_d_and_i.c \
	  print_s.c \
	  print_p.c \
	  print_u.c \
	  print_x.c \
	  ft_printf.c

OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	$(AR) $@ $^

.c.o: $(SRC)
	$(CC) $(CFLAGS) -c -o $@ $<

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
