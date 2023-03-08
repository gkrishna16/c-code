#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;

// int SumOfElements(int *A, int size){
//     int i, sum = 0;
//     for (i = 0; i < size; i++)
//     {
//         sum += A[i]; // A[i] *(A+1)
//     }
//         return sum;
// };


void print(char * C)
{
    while (*C != '\0') // extraction of value of that pointer by putting star before that
    {
        printf("%c", *C);
        C++; // reaching next pointer 
    }
    printf("\n");
}

int main() 
{
        // char C[20] = "JOHN";
        // int len = strlen(C);

        // char *C2;
        // C2 = C;
        // printf("The string is %c.\n", *(C+1));

        // printf("The sum is %d\n", SumOfElements(C, sizeof(A)/sizeof(A[0])));

        // printf("%d\n", len);
        // printf("%s\n", C);

        // int A[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

        // printf("The pointer of the array is %d.\n", A);
        // printf("The value her %d. \n", *(A + 1));
        // printf("The sum of all elements of the array %d.\n", SumOfElements(A, sizeof(A) / sizeof(A[0])));


        return 1;
}

