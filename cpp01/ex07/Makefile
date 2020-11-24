# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laballea <laballea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 09:25:42 by laballea          #+#    #+#              #
#    Updated: 2020/10/08 15:59:05 by laballea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = #-Wall -Wextra -Werror

FT = main.cpp

NAME = ex07

INCLUDE = 

all:
	${CC} ${CFLAGS} ${FT} -o ${NAME}

fclean:
		rm -rf ${NAME}

re: fclean all

.PHONY : all fclean re