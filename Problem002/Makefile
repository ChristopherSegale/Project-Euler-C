CC=clang
BIN=problem002

all: problem002.o
	$(CC) problem002.o -o $(BIN)

problem002.o:
	$(CC) -c problem002.c

clean:
	rm -f *.o

clean-all: clean
	rm -f $(BIN)
