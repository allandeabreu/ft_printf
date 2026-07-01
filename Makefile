# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/21 20:28:46 by allferna          #+#    #+#              #
#    Updated: 2026/06/16 19:29:08 by allferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a 

CC = cc 
CFLAGS = -Wall -Wextra -Werror


AR          = ar rcs
RM          = rm -f

HEADERS     = ft_printf.h

SRCS        = ft_printf.c \
		  ft_check_format.c \
		  ft_put_c.c \
		  ft_put_s.c \
		  ft_put_p.c \
		  ft_put_d_i.c \
		  ft_put_u.c \
		  ft_put_x.c

OBJS        = $(SRCS:.c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)


%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)


re: fclean all


.PHONY: all clean fclean re 