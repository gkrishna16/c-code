#include <iostream>
using namespace std;

void printStar10(int n)
{
    for (int i = 0; i < n; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j <= stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{

    printStar10(10);
}