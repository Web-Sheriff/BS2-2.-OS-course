#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
	int file_d;
	struct stat buf;

	file_d = open("ex1.txt", O_RDWR);
	fstat(file_d, &buf); // buf.st_size - size of file
	void* map;
	map = mmap(0, buf.st_size, PROT_WRITE, MAP_SHARED, file_d, 0);
	sprintf((char*)map, "This is a nice day"); // write in memory
	munmap(map, buf.st_size);
	return 0;	 
}