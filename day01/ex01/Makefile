# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abayar <abayar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 10:51:07 by abayar            #+#    #+#              #
#    Updated: 2022/09/02 10:51:27 by abayar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Zombie.cpp zombieHorde.cpp

NAME = Zombie

FLAG = g++ -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} :
	@${FLAG} ${SRC} -o ${NAME}

clean : 
	@ rm -f ${NAME}
fclean : clean

re : fclean all