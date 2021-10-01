#include "apue.h"

int
main (void)
{
	off_t currpos;

	if ( (currpos = lseek(STDIN_FILENO, 0, SEEK_CUR)) == -1)
		printf("cannot seek\n");
	else
		printf("seek OK, currpos=%ld\n", currpos);

	exit(0);
}