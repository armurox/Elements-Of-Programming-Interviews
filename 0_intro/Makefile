CC := g++
C_FLAGS := -std=c++23 -Wall -pedantic
EXECUTABLES := ./executables
.PHONY: clean all

h_index: h_index.o
	$(CC) $^ -o $@
	rm -f $^

%.o: %.cpp
	$(CC) $(C_FLAGS) -c $^ -o $@

clean:
	rm -f h_index
	rm -f *.o