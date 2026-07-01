//wap to print months according to number.
#include <iostream>
using namespace std;
int main()
{
    int months;
    cout<< "Enter  a num  for month : ";
    cin>> months;

    switch (months)
    {
        case 1 : cout<<"January";break;
        case 2 : cout<<"February";break;
        case 3 : cout<<"March";break;
        case 4 : cout<<"April";break;
        case 5 : cout<<"May";break;
        case 6 : cout<<"June";break;
        case 7 : cout<<"July";break;
        case 8 : cout<<"Augsut";break;
        case 9 : cout<<"september";break;
        case 10 : cout<<"Octmber";break;
        case 11 : cout<<"November";break;
        case 12 : cout<<"December";break;
        default : cout<<"Enter a 1 to 12 number";

    }
    return 0;
}
