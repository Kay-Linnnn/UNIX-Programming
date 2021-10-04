ROOT=../..
include $(ROOT)/Make.defines.linux

app = get_file_flag
OBJS = $(app).o

$(app): $(OBJS)
		$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)
		$(RANLIB) $(app)

clean:
	rm -f *.o $(app)
