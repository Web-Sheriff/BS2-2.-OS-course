#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h> // for access modificator O_RDONLY

int main() {
        int randomizer = open("/dev/urandom", O_RDONLY);
        char buffer[21]; // 21 because of the null character '\0'
		buffer[20] = '\0';
        // In the case if our memory pool is empty
        while(randomizer == 0) {
                randomizer = open("/dev/urandom", O_RDONLY);
        }

        read(randomizer, buffer, 20);
        printf("%s\n", buffer);
        close(randomizer);

        return 0;
}