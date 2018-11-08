#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>

int main(int argc, char** argv) {
	if (argc == 1) {
		printf("ERROR");
		return -1;
	}
	else {
		char byte;
		int stream;
	
		int result = strcmp(argv[1],"-a");
		// If result == 0: I will not rewrite file, I will add to the exsiting one
		int f_size;  
		if (result == 0) 
			f_size = argc - 2; // In argc we have always at least one argument - file name
		else
			f_size = argc-1;

		int* fd = (int*) calloc(f_size, sizeof(int));

		for (int i = 0; i < f_size; i++) {
			fd[i] = open(argv[argc-f_size+i], (!result? 0 : O_TRUNC) | O_APPEND | O_CREAT | O_WRONLY, S_IRWXU | S_IRWXG | S_IRWXO);
		} 

		stream = open("/dev/stdin", O_RDONLY);
		while(read(stream, &byte, 1) && byte != EOF) {
			for (int i = 0; i < f_size; i++)
				write(fd[i], &byte, 1);
		}
		close(stream);

		for(int i = 0; i<f_size; i++)
			close(fd[i]);

		return 0; 
	}
	
}
