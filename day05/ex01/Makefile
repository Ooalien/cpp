# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abayar <abayar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 15:55:55 by abayar            #+#    #+#              #
#    Updated: 2022/10/21 11:59:00 by abayar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Bureaucrat.cpp main.cpp
NAME = program

FLAGS = g++ -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} :
	@${FLAGS} ${SRC} -o ${NAME}

clean : 
	@ rm -f ${NAME}
fclean : clean

re : fclean all