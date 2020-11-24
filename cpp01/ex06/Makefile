# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laballea <laballea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/06 09:25:42 by laballea          #+#    #+#              #
#    Updated: 2020/10/06 10:41:39 by laballea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang++

CFLAGS = -Wall -Wextra -Werror

FT = HumanA.cpp HumanB.cpp Weapon.cpp main.cpp

NAME = ex06

INCLUDE = Weapon.hpp

all:
	${CC} ${CFLAGS} ${FT} -o ${NAME}

fclean:
		rm -rf ${NAME}

re: fclean all

.PHONY : all fclean re