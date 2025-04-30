CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 --coverage
LDFLAGS = -lgtest -lpthread

SRC = romano.cpp testa_romano.cpp tests/test_romano.cpp
OBJ = $(SRC:.cpp=.o)

EXEC = run_tests

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f *.o tests/*.o $(EXEC) *.gcov *.gcda *.gcno

test: all
	./$(EXEC)

coverage: test
	gcov romano.cpp

valgrind: test
	valgrind --leak-check=full ./$(EXEC)

lint:
	cppcheck --enable=warning .

