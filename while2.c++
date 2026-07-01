#include <iostream>
using namespace std;
int main ()
{
    int num , rem, res = 0;
    cout<<"Enter your Number : ";
    cin >> num;
    while (num > 0)
    {
        rem = num % 10;
        res = res + rem;
        num = num / 10;
    }
    cout<<"Sum of indivisuals Digit :" << res;
}