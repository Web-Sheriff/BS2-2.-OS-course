#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/resource.h>

int main() {
	struct rusage r;
	for (int i = 0; i < 10; i++) {
		void *p = malloc(1024*1024*100);
		memset(p, 0, 1024*1024*100);
		getrusage(RUSAGE_SELF, &r);
		
		printf("Maximum resident set size: %ld\n", r.ru_maxrss);
		printf("__________________________________\n");
		sleep(1);
	}
	return 0;
}