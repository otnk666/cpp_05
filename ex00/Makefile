
NAME = ex00

CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
CXXFLAGS += -std=c++98 -pedantic

RM = rm -rf
SRCS_DIR = ./srcs
INC_DIR = ./includes

SRCS = $(SRCS_DIR)/main.cpp \
		$(SRCS_DIR)/Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDES = -I $(INC_DIR)

all : $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) $(INCLUDES) -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
