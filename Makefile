# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sakholmi <sakholmi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 18:05:28 by sakholmi          #+#    #+#              #
#    Updated: 2019/10/02 19:01:31 by sakholmi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a
SRCS=*.c
OBJECTS=*.o
INCLUDES=./
all: $(NAME)
$(NAME): $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)
clean:
	@/bin/rm -f $(OBJECTS)
fclean: clean
	@/bin/rm -f $(NAME)
re: fclean all