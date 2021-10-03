/*
 *copy standard input to standard out
 *This prevents the program from having to open the input and output files,
 *and allows the uesr to take advantage of the shell's I/O redirection facilities
*/
#include "apue.h"

#define BUFSIZE		4096 /*Increase the buffer size beyond this limit has little positive effect*/

int
main(void)
{
	int n;
	char buf[BUFSIZE];

	while ((n = read(STDIN_FILENO, buf, BUFSIZE)) > 0)
		if (write(STDOUT_FILENO, buf, n) != n)
			err_sys("write error");

	if (n < 0)
		err_sys("read error");

	exit(0);
}