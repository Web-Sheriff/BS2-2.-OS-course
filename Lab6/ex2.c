// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// #include <sys/types.h>
// #include <unistd.h>
// #include <sys/wait.h>

// int main() {
// 	int file_descriptor[2];
// 	char str[64] = "I love OS course. But sometimes I fail tasks...";
// 	char buffer[64];

// 	if (pipe(file_descriptor) == -1) {
//     printf("Pipe error\n");
// 	}	
// 	else {
// 	write(file_descriptor[1], str, 64);
// 	close(file_descriptor[1]);
//   }

// 	pid_t pchild_id = fork();

// 	if (pchild_id == 0) {
// 		read(file_descriptor[0], buffer, 64);
// 	} else {
// 		printf("Some runtime error occured");
// 	}

//   printf(str,"\n");
//   printf(buffer);
// 	return 0;
// }