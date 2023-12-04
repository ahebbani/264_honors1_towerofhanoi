GCC = gcc -std=c99 -g -Wall -Wshadow --pedantic -Wvla -Werror
VAL = valgrind --tool=memcheck --log-file=vallog --leak-check=full --verbose

SRCS = main.c hanoi.c
OBJS = $(SRCS:%.c=%.o)

hanoi: $(OBJS)
	$(GCC) $(OBJS) -o hanoi

.c.o: 
	$(GCC) -c $*.c 

testall: test1 test2 test3 test4 test5 

test1 test2 test3 test4 test5: hanoi
	./hanoi inputs/$@ > output$(subst test,,$@)
	diff output$(subst test,,$@) expected/expected$(subst test,,$@)

testmem: hanoi
	$(VAL) ./hanoi inputs/test1

clean: # remove all machine generated files
	rm -f hanoi *.o output* vallog *~