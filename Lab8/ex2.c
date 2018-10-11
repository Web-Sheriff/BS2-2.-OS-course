#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main() {
	for (int i = 0; i < 10; i++) {
		void *p = malloc(1024*1024*100);
		memset(p, 0, 1024*1024*100);
		sleep(1);
	}
	return 0;
}