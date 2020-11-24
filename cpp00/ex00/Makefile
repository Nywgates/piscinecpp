# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laballea <laballea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 15:19:20 by laballea          #+#    #+#              #
#    Updated: 2020/09/16 10:45:11 by laballea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

FT = megaphone.cpp

NAME = megaphone

all:
	${CC} ${CFLAGS} ${FT} -o ${NAME}

fclean:
		rm -rf ${NAME}

re: fclean all

.PHONY : all fclean re
