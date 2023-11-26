# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rtonar <rtonar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 17:59:15 by rtonar            #+#    #+#              #
#    Updated: 2023/11/26 17:59:17 by rtonar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_printf.c ft_putnbrs.c ft_putchars.c ft_puthex.c

OBJ = $(SRCS:.c=.o)

HEADER = ft_printf.h

FLAGS = -Wall -Wextra -Werror

%.o : %c
	gcc $(FLAGS) -c $< -o $@ -I$(HEADER)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	
all : $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re