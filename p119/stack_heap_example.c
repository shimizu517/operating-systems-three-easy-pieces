#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    // heap
    int *x = (int *) malloc(sizeof(int));
    *x = 42;
    printf("x: %d\n", *x);  // value
    printf("x: %p\n", x);   // address

    // size of pointer
    int *a = malloc(10 * sizeof(int));
    printf("size of pointer of a: %lu\n", sizeof(a));

    // size of array
    int b[10];
    printf("%lu\n", sizeof(b));
}