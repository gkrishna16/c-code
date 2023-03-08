#include<stdio.h>
#include<string.h>

int main() 
{

// int a = 100;
// int *p = &a;

// printf("%p", p);

// int A[5] = {1,2,3,4,5};

// printf("%i\n", p);
// printf("%i\n", &a);

// printf("For the array.\n");
// printf("%i", *A);

// Multidimensional Array 
int B[2][3] = {{1,2,3}, {4,5,6}};
int (*p)[2] = B;
printf("%p", p);
printf("%i\n", *B[0]);

}