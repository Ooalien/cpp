SRC = main.cpp Span.cpp

NAME = ex01

FLAGS = c++ -std=c++98 -Wall -Wextra -Werror

all : ${NAME}

${NAME} :
	@${FLAGS} ${SRC} -o ${NAME}

clean : 
	@ rm -f ${NAME}
fclean : clean

re : fclean all
