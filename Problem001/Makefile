CC=clang
BIN=problem001

all: problem001.o
	$(CC) problem001.o -o $(BIN)

problem001.o:
	$(CC) -c problem001.c

clean:
	rm -f *.o

clean-all: clean
	rm -f $(BIN)
