CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11

NAME = ex05
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = Harl.hpp

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJS)

%.o: %.cpp $(HDRS)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re