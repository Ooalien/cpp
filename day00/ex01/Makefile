# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abayar <abayar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 12:08:23 by abayar            #+#    #+#              #
#    Updated: 2022/08/30 12:24:59 by abayar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Contact.cpp PhoneBook.cpp

NAME = Phonebook

FLAG = g++ -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} :
	@${FLAG} ${SRC} -o ${NAME}

clean : 
	@ rm -f ${NAME}
fclean : clean

re : fclean all