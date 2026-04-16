CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11

NAME = ex00
SRCS = main.cpp newZombie.cpp randomChump.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)
HDRS = Zombie.hpp

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