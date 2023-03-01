#include <stdio.h>
#include <iostream>
using namespace std;

int SumOfElements(int *A, int size){
    int i, sum = 0;
    for (i = 0; i < size; i++)
    {
        sum += A[i]; // A[i] *(A+1)
    }
        return sum;
};

int main() 
{
        int A[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

        printf("The pointer of the array is %d.\n", A);
        printf("The value her %d. \n", *(A + 1));
        printf("The sum of all elements of the array %d.\n", SumOfElements(A, sizeof(A) / sizeof(A[0])));

        return 1;
}