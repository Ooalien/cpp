# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abayar <abayar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/01 14:36:02 by abayar            #+#    #+#              #
#    Updated: 2022/09/01 14:39:30 by abayar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

NAME = Zombie

FLAG = g++ -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} :
	@${FLAG} ${SRC} -o ${NAME}

clean : 
	@ rm -f ${NAME}
fclean : clean

re : fclean all