NAME	= ex00

CXX		= c++
CXXFLAGS = -Wall -Werror -Wextra
CXXFLAGS += -std=c++98 -pedantic

RM 		= rm -rf

SRCS = main.cpp Bureaucrat.cpp 

OBJS = $(SRCS:.cpp=.o)

INCLUDES = Bureaucrat.hpp

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re
