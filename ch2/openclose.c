#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int fd;
    char filename[] = "/home/elusivenode/study/linuxsysprogC/assets";

    fd = open(filename, O_RDONLY);
    printf("File descriptor is: %d\n", fd);
    close(fd);
    return 0;
}
