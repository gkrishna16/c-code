#include<stdio.h>
#include<string.h>

// bubble sort 
void bubbleSort (int * A, int size) 
{
    for (int i = 0; i < size;i++) 
    {
        for (int j = 0; j < size - 1; j++)
        {
         if (A[j] > A[j+1])
        {
          int temp = A[j];
          A[j] = A[j + 1];
          A[j + 1] = temp;
         }
        }
    }
}

// selection sort 
void selectionSort (int * A, int size)
{
    for (int i = 0; i < size - 1; i ++)
    {
        // select the element.
        int selected = i;
        for (int j = i+1; j < size; j++)
        {
            if (A[j] <A[selected] )
            {
            selected = j;
            }
        }
        if (selected != i) 
        {
            int temp = A[selected];
            A[selected] = A[i];
            A[i] = temp;
        }
    }
}

void mergeSort(int * A, int size) 
{
    
}

void PrintStar (int n ) 
{
    for (int rows = 0; rows < n;rows++)
    {
        for (int space = rows; space <= n; space++)
        {
            printf(" ");
        }
           for (int star = 0; star < (2*rows)+1; star++)
            {
            printf("*"); 
            }
        printf("\n");
    }
}


void insertionSort(int *A, int size) 
{
    // insertion sort algortth inserts the value after comparing ther value to the other ones located at the left side of the array.
    for (int i = 1; i < size;i++)
    {
        int insertion = A[i];
        int j = i - 1;
        while (j >= 0 && insertion < A[j])
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = insertion;
    }   
}

int main() 
{

int A[3][3] = {{6,2,5},{0,1,3},{4,9,8}};
int * p;
p = A[1];

printf("%d\n", A);
printf("%d\n", A[0]);
printf("%d\n", p);


}


//       *
//      ***
//     *****
//    *******
//   *********