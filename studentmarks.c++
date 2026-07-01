#include <iostream>
using namespace std;
class student
{
    int rno;
    int M1;
    int M2;
    float per;

public:
    void setRno(int r)
    {
        rno = r;

    }
    void setMarks(int m1,int m2)
    {
        M1 = m1;
        M2 = m2;
        per = ((M1 + M2)/ 200.0)*100;

    }
    void getResult()
    {
        cout<< "student rno : " <<rno << endl;
        cout<<  "M1 : "<< M1 << endl;
        cout<< "M2 : "<<M2 <<endl;
        cout <<"per : " <<per<< endl;
        cout <<"------------------------------"<<endl;

     }
};
int main ()
{
    student s1;
    s1.setRno(101);
    s1.setMarks(70,40);
    s1.getResult();
    return 0;
}   