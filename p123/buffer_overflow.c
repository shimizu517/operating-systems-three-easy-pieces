#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    char *src = "hello";
    char *dst = (char *) malloc(1);
    strcpy(dst, src);
    printf("%s\n", dst);
}
