#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define INPUT_SIZE 12

int main() {
	int n;
	n = 0;
	
	printf("Enter N, please: ");
	scanf("%d", &n);

	int* array = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++) array[i] = i;
	for (int i = 0; i < n; i++) printf("%d ", array[i]);
	printf("\n");
	free(array);

	return 0;
}