// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <unistd.h>

// int main() {
// 	int file_descriptor[2];
// 	char str[] = "I love OS course. But sometimes I fail tasks...";
// 	char buffer[64];

// 	if (pipe(file_descriptor) == -1) {
// 		printf("Pipe error\n");
// 	}
//   else {
// 	write(file_descriptor[1], str, sizeof(str)/sizeof(str[0]));
// 	read(file_descriptor[0], buffer, sizeof(buffer)/sizeof(buffer[0]));
// 	printf(str,"\n");
//   printf(buffer);
//   }
// 	return 0;
// }