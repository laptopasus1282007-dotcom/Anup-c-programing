// wap to  check voter is a eligible for voting or not.
#include <iostream>
using namespace std;
int main()
{   
    int age;
    cout<<"Enter your Age : ";
    cin>>age;

    if (age >= 18)
    {
        cout<<"You can eligible for vote";
    }
    else
    {
        cout<<"you can not eligible for voting"<<endl;
        cout<<"Because you are under age";
    }

    return 0;
}