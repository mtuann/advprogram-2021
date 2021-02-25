CFLAGS = -O
CC = g++

NumTest: main.o Num.o
	${CC} ${CFLAGS} -o NumTest main.o Num.o

Num.o: Num.cpp
	${CC} ${CFLAGS} -c Num.cpp

main.o: main.cpp
	${CC} ${CFLAGS} -c main.cpp

clean:
	rm -rf core *.o