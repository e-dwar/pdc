CFLAGS=-Wall -ansi -pedantic
EXE=main
ifdef debug
  CFLAGS+= -g
endif
all: $(EXE)
%.o: %.c %.h
	gcc $(CFLAGS) -c $<
main: main.c stack.o
	gcc $(CFLAGS) -o $@ $^ -lm
clean:
	rm -f $(EXE) *.o
