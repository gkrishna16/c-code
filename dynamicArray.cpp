#include <iostream>
using namespace std;


int main () {

    int rows, cols;
    cout << "rows, cols";
    cin >> rows >> cols;
    
    // table of pointers

    int **table = new int*[rows];

    for (int i = 0; i < rows;i++) {
        table[i] = new int[cols];
    }

    table[1][3] = 100;

    for (int j = 0; j < rows;j++) {
        delete[] table[j];
    }

    delete[] table;
    table = NULL;

    for (int k = 0; k < 10;k++) {
        cout << k << endl;
    }

        return 1;
}