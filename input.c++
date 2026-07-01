#include <iostream>
using namespace std;
int main()
{
    string name;
    int age;
    float height;
    char gender;

    cout<< "Enter a Name :";
    cin>> name;

    cout<< "Enter a Age : ";
    cin>> age;

    cout<< "Enter a height : ";
    cin >> height;

    cout<< "Enter a gender : ";
    cin>> gender;

    cout << "Personal Info \n";
    cout << "Name is = " << name <<endl;
    cout << "Age is = " << age << endl;
    cout << "Height is = " << height << endl;
    cout << "gender = " << gender << endl;


    
    return 0;
}