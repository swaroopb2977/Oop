#include<iostream>
using namespace std;

class student
{
    private:
    int age; // THIS CAN BE ONLY BE ACCESED THROUGH THE PUBLIC MEMBER FUNCTIONS 

    public:
    int rolln;

    //default constructor 
    student()
    {
        cout<<"constructor called : \n";
    }

    //parameterise constructor 
    student(int r)
    {
        cout<<"parameterise constructor :"<<endl;
        age=r;
    }

    student (int a,int r)
    {
        age =a;
        rolln=r;
    }

    void display()
        {
            cout<<age<<" "<<rolln;
        }

    int getage()
    {
        return age;
    }

    void setage(int a)
    {
        age =a;
    }
    
};


int main()
{
    cout<<"AGE"<<" "<<"ROLLNO"<<endl;
    student s1;
    student s2;
    s1.rolln=24;
    s1.setage(18);
    s2.setage(19);
    s2.rolln=25;
    s1.display();
    cout<<"\n";
    s2.display();
    cout<<"\n";

    student *s3= new student;
    (*s3).rolln=50;
    s3->setage(20);
    s3->display();
    cout<<"\n";
    student s4(10); // THIS IS HOW WE CAN CALL THE PARAMERTERISE CONSTRUCTOR 
    s4.rolln=80;
    s4.display();
    

    return 0;
}