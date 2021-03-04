# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laballea <laballea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 09:08:35 by laballea          #+#    #+#              #
#    Updated: 2021/03/04 10:52:11 by laballea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

FT = *.cpp

NAME = identify

${NAME}:
	${CC} ${CFLAGS} ${FT} -o ${NAME}

all: ${NAME}

fclean:
	rm -rf ${NAME}

re: fclean all

.PHONY : all fclean re
