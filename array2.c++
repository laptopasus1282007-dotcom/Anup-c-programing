#include <iostream>
using namespace std;
int main()
{   
    int arr[5];
    int i;
    cout<< "Enter array of element : ";
    for (i = 0 ; i < 5 ; i++)

    {
        cin >> arr[i];

    }

    cout << "array element are : ";
    for (i = 0 ; i < 5 ; i++ )
    {
        cout << "arr[i]" << " "; 
    }
    int sum = 0 ;
    for (i = 0 ; i < 5 ; i++ )
    {
        sum = sum  + arr[i];
    }
    cout << "\narray all element sum are : " << sum;
    return 0;
}