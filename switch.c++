#include <iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter num for Day : ";
    cin>> day;

    switch (day)
    {
        case 1: 
        cout<<"manday";
        break;

        case 2: 
        cout<<"tuseday";
        break;

        case 3: 
        cout<<"wednsday";
        break;

        case 4: 
        cout<<"Thusday";
        break;

        case 5: 
        cout<<"Friday";
        break;

        case 6: 
        cout<<"Saturday";
        break;

        case 7: 
        cout<<"Sunday";
        break;

        default :
        cout<< "enter a 1 to 7 number";
    }
    return 0;
}