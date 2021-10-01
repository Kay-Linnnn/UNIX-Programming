ROOT=../..
include $(ROOT)/Make.defines.linux

app = file_hole
OBJS = file_hole.o

$(app): $(OBJS)
		$(CC) $(CFLAGS) $@.c -o $@ $(LDFLAGS) $(LDLIBS)
		$(RANLIB) $(app)

clean:
	rm -f *.o $(app)
