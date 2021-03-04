# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laballea <laballea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 09:08:35 by laballea          #+#    #+#              #
#    Updated: 2021/03/04 11:38:52 by laballea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

FT = *.cpp

NAME = iter

${NAME}:
	${CC} ${CFLAGS} ${FT} -o ${NAME}

all: ${NAME}

fclean:
	rm -rf ${NAME}

re: fclean all

.PHONY : all fclean re
