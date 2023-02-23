#include <iostream>
using namespace std;

void printNumber(int* numberPtr) 
{
    cout << *numberPtr << endl;
}

void printChar(char * charPtr) 
{
    cout << *charPtr << endl;
}

void print(void *ptr, char type) 
{
switch(type) {
    case 'i' :
      cout << *((int *)ptr) << endl;
      break;
    case 'c':
      cout << *((char *)ptr) << endl;
      break;
    }
}

int main() 
{
// void pointer
// int number = 5;
// char letter = 'a';
// printNumber(&number);
// printChar(&letter);

// print(&letter, 'c');
// print(&number, 'i');

    // int v;
    // int *ptr = &v;
    // *ptr = 100;
    // cout << ptr << endl;

    return 1;
}