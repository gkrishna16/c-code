#include<stdio.h>

int main () {

    int a;
    int *p;
    p = (int *)malloc(sizeof(int));

    int a = 100;
    printf("%d", a);
    return 1;
}