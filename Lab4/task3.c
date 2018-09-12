#include <stdio.h>

#include <stdlib.h>


int main() {

	char command[256];

	for(;;){

		fgets(command, 256, stdin);

		system(command);

	}

	return 0;

}