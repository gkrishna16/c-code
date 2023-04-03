#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows :" << endl;
    cin >> n;
    cout << "The result now ----" << endl;

    int rows = 1;
    while (rows <= n)
    {
        int space = n - rows;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int stars = 1;
        while (stars <= rows)
        {
            cout << "*";
            stars = stars + 1;
        }
        cout << endl;
        rows++;
    }

    return 0;
}