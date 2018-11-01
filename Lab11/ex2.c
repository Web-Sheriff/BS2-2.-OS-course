#include <stdlib.h>
#include <stdio.h>

int main() {
	char buf[256];
	FILE *file;
	file = fopen("ex2.txt", "w");
	setvbuf(file, buf, _IOLBF, 256);;

	fputs('H', file);
	sleep(1);
	fputs('E', file);
	sleep(1);
	fputs('L', file);
	sleep(1);
	fputs('L', file);
	sleep(1);
	fputs('O', file);
	sleep(1);

	printf("%s", buf);
	fclose(file);
	return 0;
}