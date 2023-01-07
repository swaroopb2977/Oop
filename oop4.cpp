#include<bits/stdc++.h>
using namespace std;

class student 
{
    int age;
    char *name;

    public:

    student (int age,char *name)
    {
        this->age=age;
        this->name=name; //shallow copy
        // Deep copy
      /*  this ->name= new char[strlen(name)+1];
        strcpy(this->name,name);
*/
    }  

    // user defined copy constructor 

    void display()
    {
        cout<<name<<" "<<age;
    }
};

int main()
{
    char name[]="abcd";
    student s1(20,name);
    s1.display();
    name[3]='e';
    student s2(21,name);
   // cout<<"\n";
    s2.display();
    s1.display();
}
