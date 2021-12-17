CC = gcc
CFLAGS = -I.
DEPS = logic-gates.h ackermann.h
RM = rm
EXE = main

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

make: main.o logic-gates.o ackermann.o
	$(CC) -o $(EXE) main.o logic-gates.o ackermann.o

clean:
	$(RM) $(EXE) *.o