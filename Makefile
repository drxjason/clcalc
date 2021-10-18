CC=g++
CXXFLAGS=-Wall -Wextra -pedantic

calc: calc.cpp
	$(CC) calc.cpp -o calc $(CXXFLAGS)

clean:
	rm -f calc