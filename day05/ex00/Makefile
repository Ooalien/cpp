# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abayar <abayar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 15:55:55 by abayar            #+#    #+#              #
#    Updated: 2022/10/15 16:15:56 by abayar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Bureaucrat.cpp main.cpp
NAME = program

FLAGS = g++ -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} :
	@${FLAGS} ${SRC} -o ${NAME}

clean : 
	@ rm -f ${NAME}
fclean : clean

re : fclean all