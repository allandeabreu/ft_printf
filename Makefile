# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/21 20:28:46 by allferna          #+#    #+#              #
#    Updated: 2026/05/25 23:33:09 by allferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a 

CC = cc 
CFLAGS = -Wall -Wextra -Werror


AR          = ar rcs
RM          = rm -f

HEADERS     = ft_printf.h

SRCS        = ft_printf.c \
				 ft_printf_utils.c

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