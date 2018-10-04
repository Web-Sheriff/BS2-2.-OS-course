#include <stdio.h>
#include <stdlib.h>

void* my_own_realloc(void* ptr, size_t my_own_size) {
	if (my_own_size <= 0) {
		free(ptr);
		return NULL;
	}

	void* my_own_ptr = malloc(my_own_size);
	if (ptr != NULL) {
		for(int i = 0; i < my_own_size; i++) {
			((char*)my_own_ptr)[i] = ((char*)ptr)[i];
		}
		free(ptr);
	}
	else {
		return malloc(my_own_size);
	}

	return my_own_ptr;
}

int main() {
	return 0;
}