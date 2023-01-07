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
        if(r>10)
        age=r;

        else
        {
            age=0;
        }
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
    student s7(2);
    s7.display();
    cout<<endl;
    student s5(10,15);
    student s6(s5);  // copy constructor 
    s6.display();
    cout<<endl;
    student s1(10,1001);
    student s2(20,2001);
    s2=s1; // Copy assignment operator assings all values of S1 into S2
    s2.display();



}

