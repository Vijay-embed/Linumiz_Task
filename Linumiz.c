#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    char *buffer;
    long size;

    size = pathconf(".", _PC_PATH_MAX);

    if ((buffer = (char *)malloc((size_t)size)) != NULL) {
        if (getcwd(buffer, (size_t)size) != NULL) {
            printf("%s\n", buffer);
        } else {
            perror("getcwd error");
        }
        free(buffer);
    } else {
        perror("malloc error");
    }

    return 0;
}
