ADDFLAG=-O3
#ADDFLAG=-g -ggdb
CFLAGS=-W -Wall -Wextra -Wfloat-equal -Wshadow -Wpointer-arith \
-Wcast-qual -Wcast-align -Wmissing-declarations -Wunused -Winline -pedantic \
-Wuninitialized -Winit-self -Werror ${ADDFLAG}
IFLAGS=-I src/
LINK=-lsfml-graphics -lsfml-network -lsfml-system -lsfml-window
CC=g++

all: Makefile.inc nostego nostego_server

clean: # Clean the repository
	rm -f `find . -name '*.o'`
	rm -f `find . -name '*~'`
	rm -f `find . -name '*#'`
	rm -f Makefile.inc
	rm -f nostego nostego_server nostego_debug nostego_server_debug

Makefile.inc: # Build the included makefile
	./configure

include Makefile.inc

nostego_server: ${OBJS} src/server/main.o # Build nostego server
	${CC} ${CFLAGS} $^ ${LINK} -o nostego_server

nostego: ${OBJS} src/main.o # Build nostego client
	${CC} ${CFLAGS} $^ ${LINK} -o nostego

debug_server: nostego_server nostego
	valgrind --leak-check=full --suppressions=./sup_file ./nostego_server

debug_client: nostego nostego_server
	valgrind --leak-check=full --suppressions=./sup_file ./nostego
