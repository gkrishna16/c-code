#include <stdio.h>
#include <iostream>
using namespace std;

int main () {

    int n = 5;
    // put the pointer in a variable
    int *nP = &n;
    cout << nP << endl;
    cout << *nP << endl;
    *nP = 6;
    cout << *nP << endl;

    return 1;
}