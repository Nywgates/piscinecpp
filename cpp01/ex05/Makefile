# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laballea <laballea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 09:25:42 by laballea          #+#    #+#              #
#    Updated: 2020/10/06 10:11:38 by laballea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

FT = Brain.cpp Human.cpp main.cpp

NAME = ex05

INCLUDE = Brain.hpp

all:
	${CC} ${CFLAGS} ${FT} -I ${INCLUDE} -o ${NAME}

fclean:
		rm -rf ${NAME}

re: fclean all

.PHONY : all fclean re