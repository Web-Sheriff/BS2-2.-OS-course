#include <stdio.h>

#include <stdlib.h>


int main() {
	char command[256];

	int n;
	for(;;){
		n = fork();

		fgets(command, 200, stdin);

		if (n == 0) {
			system(command);

		}

	}

	return 0;

}