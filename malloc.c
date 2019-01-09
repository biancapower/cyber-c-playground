#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(int argc, char const *argv[]) {

    int money = 15;

    int *p;
    
    p = malloc(sizeof(int));

    int *q;
    q = malloc(sizeof(int));

    *p = 5;
    *q = 6;

    int **r;

    r = &p;

    printf("money contains %d, and is located at %p\n", money, &money);
    printf("p leads to a value of %d, and contains %p\n", *p, p);
    printf("q leads to a value of %d, and contains %p\n", *q, q);
    printf("r leads to a value of %p (which leads to a value of %d), and contains %p\n", *r, **r, r);


    return 0;
}