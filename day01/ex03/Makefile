# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abayar <abayar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/06 11:06:51 by abayar            #+#    #+#              #
#    Updated: 2022/09/07 10:34:58 by abayar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Weapon.cpp HumanA.cpp HumanB.cpp main.cpp

NAME = program

FLAG = g++ -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} :
	@${FLAG} ${SRC} -o ${NAME}

clean : 
	@ rm -f ${NAME}
fclean : clean

re : fclean all