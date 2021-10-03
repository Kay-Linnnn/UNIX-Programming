ROOT=../..
include $(ROOT)/Make.defines.linux

app = copy_file
OBJS = copy_file.o

$(app): $(OBJS)
		$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)
		$(RANLIB) $(app)

clean:
	rm -f *.o $(app)
