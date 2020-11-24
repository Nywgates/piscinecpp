# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: user42 <user42@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 09:25:42 by laballea          #+#    #+#              #
#    Updated: 2020/11/23 11:16:13 by user42           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = #-Wall -Wextra -Werror

FT = *.cpp

NAME = ex02

INCLUDE = Fixed.class.hpp

all:
	${CC} ${CFLAGS} ${FT} -I ${INCLUDE} -o ${NAME}

fclean:
		rm -rf ${NAME}

re: fclean all

.PHONY : all fclean re