# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laballea <laballea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 09:25:42 by laballea          #+#    #+#              #
#    Updated: 2020/10/08 16:42:42 by laballea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = #-Wall -Wextra -Werror

FT = *.cpp

NAME = ex08

INCLUDE = Human.hpp

all:
	${CC} ${CFLAGS} ${FT} -I ${INCLUDE} -o ${NAME}

fclean:
		rm -rf ${NAME}

re: fclean all

.PHONY : all fclean re