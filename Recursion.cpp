#include <iostream>
#include <string>
using namespace std;

// class Solution
// {
// public:
//     void patt1(int n)
//     {
//         int rows = 1;
//         while (rows <= n)
//         {
//             int cols = 1;
//             int stars = n - rows + 1;
//             while (cols <= stars)
//             {
//                 cout << stars - cols + 1 << " ";
//                 cols = cols + 1;
//             }
//             cout << endl;
//             rows = rows + 1;
//         }
//     }
//     void patt2(int n)
//     {
//         int rows = 1;
//         while (rows <= n)
//         {

//             int space = n - rows;
//             int sp = 1;
//             while (sp <= space)
//             {
//                 cout << " ";
//                 sp++;
//             }
//             int cols = 1;
//             int stars = 2 * rows - 1;
//             while (cols <= stars)
//             {
//                 cout << "*";
//                 cols = cols + 1;
//             }
//             cout << endl;
//             rows = rows + 1;
//         }
//     }

//     void patt4(int n)
//     {
//         int rows = 1;
//         while (rows <= n)
//         {
//             // Print karo space.
//             int space = n - rows;
//             while (space)
//             {
//                 cout << " ";
//                 space = space - 1;
//             }
//             // Print 1st triangle.
//             int j = 1;
//             while (j <= rows)
//             {
//                 cout << j ;
//                 j++;
//             }

//             // Print 3rd triangle.
//             int start = rows - 1;
//             while (start)
//             {
//                 cout << start;
//                 start--;
//             }
//             cout << endl;
//             rows++;
//         }
//     }

//     void patt5()
//     {

//     }
// };


class Solution {
    public:
    void patt1(int n)
    {
        int i = 1;
        while (i < n)
        {
            int j = 1;
            while (j < i)
            {
                cout << j;
                j++;
            }
            cout << endl;
            i++;
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