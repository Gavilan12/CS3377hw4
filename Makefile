CC := gcc
myprog1 : myprog1.o
	$(CC) -o $@ $< 
myprog1.o : myprog1.c
	$(CC) -c $<
