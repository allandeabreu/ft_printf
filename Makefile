# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/21 20:28:46 by allferna          #+#    #+#              #
#    Updated: 2026/05/21 21:59:06 by allferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_printf.a 

CC = cc 
CFLAGS = -Wall -Wextra -Werror





all: $(NAME)


$(NAME): $(OBJS)
	$(LIBC) $(NAME) $(OBJS)


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS) $(BONUS_OBJS)


fclean: clean
	$(RM) $(NAME)


re: fclean all


.PHONY: all clean fclean re bonus