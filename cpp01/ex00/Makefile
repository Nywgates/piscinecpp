# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laballea <laballea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 08:02:24 by laballea          #+#    #+#              #
#    Updated: 2020/10/06 08:02:46 by laballea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

FT = main.cpp Pony.cpp

NAME = Pony

INCLUDE = Pony.hpp

all:
	${CC} ${CFLAGS} ${FT} -I ${INCLUDE} -o ${NAME}

fclean:
		rm -rf ${NAME}

re: fclean all

.PHONY : all fclean re