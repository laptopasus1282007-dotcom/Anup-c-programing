// write a program to cheak given num even or odd .
#include <iostream>
using  namespace std;
int main ()
{
    int num;
    cout<<"Enter a number : ";
    cin>> num;
    switch (num%2==0)
    {
        case 0 : cout<<"num is odd";break;
        case 1 : cout<<"number is even";break;
    }

}