ROOT=../..
include $(ROOT)/Make.defines.linux

app = my_ls
OBJS = my_ls.o

$(app): $(OBJS)
		$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)
		$(RANLIB) $(app)

clean:
	rm -f *.o $(app)
