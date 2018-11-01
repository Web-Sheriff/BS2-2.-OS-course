#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
	int file_d_s;
	int file_d_d;
	struct stat buf;

	file_d_s = open("ex1.txt", O_RDWR);
	fstat(file_d_d, &buf); // buf.st_size - size of file
	void* map_d;
	map_d = mmap(0, buf.st_size, PROT_WRITE, MAP_SHARED, file_d_s, 0);
	
	file_d_d = open("ex1.memcpy.txt",O_RDWR);
	fstat(file_d_s, &buf);
	void* map_s;
	map_s = mmap(0, buf.st_size, PROT_WRITE, MAP_SHARED, file_d_d, 0);

	memcpy(mup_d,mup_s, buf.st_size);)

	munmap(map_d, buf.st_size);
	munmap(map_s, buf.st_size);	

	close(file_d_s);
	close(file_d_d);
}