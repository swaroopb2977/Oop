// Types Of inheritance

#include<bits/stdc++.h>
using namespace std;

class teacher 
{
    public :
    string name;
    string age;
    void print()
    {
        cout<<"TEACHER ";
    }
};

class student
{

    public:

    string name;
    void print()
    {
        cout<<"STUDENT ";
    }


};

class TA: public teacher,public student
{
    public:
    //string name;
};

int main()
{
    TA a;

    // a.print() // have to specify the specific base class 
    a.student::print();
    a.student ::name="Swaroop";
}