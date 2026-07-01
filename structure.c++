#include <iostream>
using namespace std;
struct student
{
    string name;
    int roll;
    float percent;

};
int main ()
{
    student s1, s2 , s3;

    s1.name = " Anup";
    s1.roll = 122;
    s1.percent = 76.50;

    s2.name = " vivek";
    s2.roll = 41;
    s2.percent = 96.50;


    s3.name = " Bhushan";
    s3.roll = 262;
    s3.percent = 86;


    cout<< "Student 1 info : " << endl;
    cout<< "name : "<< s2.name << endl;
    cout << "roll : " << s2.roll << endl;
    cout << "percent : " << s2.percent << endl;

    
    cout<< "Student 2 info : " << endl;
    cout<< "name : "<< s2.name << endl;
    cout << "roll : " << s2.roll << endl;
    cout << "percent : " << s2.percent << endl;

    
    cout<< "Student 3 info : " << endl;
    cout<< "name : "<< s3.name << endl;
    cout << "roll : " << s3.roll << endl;
    cout << "percent : " << s3.percent << endl;
}