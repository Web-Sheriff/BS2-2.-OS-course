#include <stdio.h>
#include <pthread.h>

void* thread_info(void* args) {
	printf("I have %d apples for my guests. Could I have more?\n", args);
	pthread_exit(NULL);
}

int main() {
	pthread_t* threads = malloc(sizeof(pthread_t*)*5);
	int i = 0;
	for (i = 0; i < 5; i++) {
		pthread_create(&threads[i], NULL, thread_info, (void*) i);
		printf("Lod #%d:",i+1,"Thread #d",i,"was created\n");
	}
	for (i = 0; i < 5; i++) {
		pthread_join(threads[i],NULL);
	}
	free(threads);
	return 0;
}
