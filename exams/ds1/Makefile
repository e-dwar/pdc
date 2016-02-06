CFLAGS=-Wall -ansi -pedantic
EXE=main
ifdef debug
  CFLAGS+= -g
endif
ifdef SystemRoot
  RM=del /F *.exe
else
  RM=rm -f
endif
all: $(EXE)
dev: clean main
%.o: %.c %.h
	gcc $(CFLAGS) -c $<
main: main.c isbn.o bubble.o
	gcc $(CFLAGS) -o $@ $^
clean:
	$(RM) $(EXE) *.o *~
