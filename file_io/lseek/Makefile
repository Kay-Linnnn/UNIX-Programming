ROOT=../..
include $(ROOT)/Make.defines.linux

app = seek_file
OBJS = seek_file.o

$(app): $(OBJS)
		$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)
		$(RANLIB) $(app)

clean:
	rm -f *.o $(app)
