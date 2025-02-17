CPP = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98

TARGET = ex01

SRCS = main.cpp ScavTrap.cpp ClapTrap.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

re: clean all
