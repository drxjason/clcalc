CC=g++
CXXFLAGS=-Wall -Wextra -pedantic

clcalc2: clcalc.cpp
	$(CC) clcalc.cpp -o clc $(CXXFLAGS)

clean:
	rm -f clc