#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    void patt1(int n)
    {
        int rows = 1;
        while (rows <= n)
        {
            int cols = 1;
            int stars = n - rows + 1;
            while (cols <= stars)
            {
                cout << stars - cols + 1 << " ";
                cols = cols + 1;
            }
            cout << endl;
            rows = rows + 1;
        }
    }
};
int main()
{
    int total;
    cout << "Enter the total number of rows : " << endl;
    cin >> total;
    cout << "---------------------" << endl;
    Solution sol;
    sol.patt1(total);

    return 0;
}
// _ _ _ *
// _ _ * *
// _ * * *