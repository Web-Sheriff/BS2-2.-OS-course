#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int referenced;
  int page_number;
	int lifespan;	
} FRAME;

int main(int argc, char** argv) {
  int result, pages_number, ticks = 0;
  FRAME frame;
  frame.referenced = setbuffer(buffer);
  frame.lifespan = ticks;
  frame.page_number = 0;
	char fpath[1024];
	char buffer[512];
	char *copy = buffer;
	FILE *file;
	int char_;
	FRAME* frame_array = (FRAME*)malloc(pages_number * sizeof(frame_array));
	for (int i = 0; i < pages_number; i++) frame_array[i].referenced = -1;

	file = fopen(fpath, "r");
	result = 0;
	while((char_ = fgetc(file)) != EOF) {
		if (char_ >= '0' && char_ <= '9') {
			*(copy++) = char_;
		} else if (char_ == ' ') {
			if (copy != buffer) {
				*copy = '\0';
				copy = buffer;
        for (int i = 0; i < pages_number; i++) {
          frame_array[i] = frame;
          if (frame_array[i].referenced == -1) { 
            result += 0;
          }
          if (frame_array[i].referenced == frame.referenced) {
            result += 1;
          }
        }
	printf("Hit/Miss ratio: %f\n", (float)result/ticks);
	return 0;
}