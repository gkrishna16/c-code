#include <iostream>
#include <string>
using namespace std;

class Solution {
    public :
    int cout_digits (int n)
    {
        int x = n;
        int count;

        while (x!=0)
        {
            x = x / 10;
            count++;
        }
        return count;
    }

    void reverseDigit(int n)
    {
        int Y = 0;
        while (n > 0)
        {
            // Extract the last digit
            int digit = n % 10;
            // Append the last digit
            Y = Y * 10 + digit;
            // Shrinking X by discarding the last digit
            n = n / 10;
        }
        cout << Y << endl;
    }
};

int main()
{
    // int a = 4;
    // int b = 6;

    // cout << "We speak clearly bout our degree." << endl;
    // cout << a << endl;

    // cout << "a&b" << a & b;
    // cout << "a&b" << a | b ;
    // cout << "a&b" << a ~ b;

    Solution sol;
   int dig =  sol.cout_digits(1000);
   cout << dig << endl;
   sol.reverseDigit(234);

   return 1;
}