include ../Make.defines

PROGS =	3_3 4_2

all:	${PROGS}

3_3: 3_3.o
		${CC} ${CFLAGS} -o $@ 3_3.o ${LIBS}

4_2: 4_2.o
		${CC} ${CFLAGS} -o $@ 4_2.o ${LIBS}

clean:
		rm -f ${PROGS} ${CLEANFILES}
