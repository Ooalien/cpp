# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abayar <abayar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/02 10:57:37 by abayar            #+#    #+#              #
#    Updated: 2022/09/02 10:57:52 by abayar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

NAME = program

FLAG = g++ -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} :
	@${FLAG} ${SRC} -o ${NAME}

clean : 
	@ rm -f ${NAME}
fclean : clean

re : fclean all