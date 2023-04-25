#include <iostream>
#include <string>
using namespace std;

int reverseNum(int n)
{
    int num = n;
    int reverse = 0;

    while (num != 0)
    {
        int lastDigit = num % 10;
        reverse = reverse * 10 + lastDigit;
        num = num / 10;
    }

    return reverse;
}

void Gfc(int num1, int num2)
{
    int ans;
    for (int i = 2; i <= min(num1, num2);i++)
    {
        if (num1 % i == 0 && num2 % i)
        {
            ans = i;
        }
    }
    cout << "The GCD of the two numbers is " << ans << endl;
}
int main()
{
    Gfc(10, 20);
    cout << reverseNum(605) << endl;
}