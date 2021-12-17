CC = gcc
CFLAGS = -I.
DEPS = logic-gates.h
RM = rm
EXE = main

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

make: main.o logic-gates.o
	$(CC) -o $(EXE) main.o logic-gates.o

clean:
	$(RM) $(EXE) *.o