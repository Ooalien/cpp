# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abayar <abayar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/29 12:27:58 by abayar            #+#    #+#              #
#    Updated: 2022/11/04 08:11:20 by abayar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = AMateria.cpp main.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

NAME = program

FLAGS = g++ -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} :
	@${FLAGS} ${SRC} -o ${NAME}

clean : 
	@ rm -f ${NAME}
fclean : clean

re : fclean all