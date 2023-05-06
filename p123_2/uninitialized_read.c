#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int *x = malloc(sizeof(int));
    printf("x: %d\n", *x);
    return 0;
}