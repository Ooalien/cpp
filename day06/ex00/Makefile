SRC = main.cpp

NAME = convert

FLAGS = g++ -Wall -Wextra -Werror -std=c++98

all : ${NAME}

${NAME} :
	@${FLAGS} ${SRC} -o ${NAME}

clean : 
	@ rm -f ${NAME}
fclean : clean

re : fclean all