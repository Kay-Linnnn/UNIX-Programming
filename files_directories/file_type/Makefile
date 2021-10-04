ROOT=../..
include $(ROOT)/Make.defines.linux

app = file_type
OBJS = $(app).o

$(app): $(OBJS)
		$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)
		$(RANLIB) $(app)

clean:
	rm -f *.o $(app)
