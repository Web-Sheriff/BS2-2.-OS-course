#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(){
	srand(time(NULL));

	printf("Enter the first array size:");
	int n1 = 0;
	scanf("%d", &n1);

	int* a1 = (int*)calloc(n1, sizeof(int));
	for(int i = 0; i < n1; i++){
		a1[i] = 100;
		printf("%d ", a1[i]);
	}

	printf("\nEnter the second array size: ");
	int n2 = 0;
	scanf("%d", &n2);

	a1 = (int*)realloc(a1, n2 * sizeof(int));
	for (int i = n1; i < n2; i++) {
		a1[i] = 0;
	}

	for(int i = 0; i < n2; i++){
		printf("%d ", a1[i]);
	}
	printf("\n");
	
	free(a1);
	return 0;
}