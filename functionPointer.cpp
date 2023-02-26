#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int getNumber() {
    return 5;
}

int Add (int a , int b) {
    return a + b;
}

bool ascendingCompare(int a , int b) {
    return a < b;
}

bool decendingCompare(int a , int b) {
    return a > b;
}

void sortAscending(vector<int> & numbersVector) {
}

int main() 
{

    int a = 100;
    int *pA = &a;

    printf("%p\n", pA);
    return 1;
}