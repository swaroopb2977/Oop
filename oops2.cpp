// class and the constructor

/*A constructor in C++ is a special 'MEMBER FUNCTION' having the same name as that of
its class which is used to initialize some valid values to the data members of an object.
 It is executed automatically whenever an object of a class is created.
*/


#include<iostream>

using namespace std;

class rectangle 
{
    private:


    int length;
    int breadth;

    public:
     
// member function

    rectangle()
    {
        length=breadth=1;
    }
   

     rectangle( int l , int b) // parameterise constructor
     {

         length=l;
         breadth=b; 


     }
     int area ();
     int perimeter();
     int getlength()
     {
         return length;
     }
     void setlength(int l)
     {
         length=l;
     }

     ~rectangle();  //destructor 

};

// member function defination can be given outside  the class using the scope resolution(::)



int rectangle::area()
{
    return length*breadth;
}

int rectangle::perimeter()
{
    return 2*(length+breadth);
}

rectangle::~rectangle()
{

}


int main()
{
    rectangle r(10,5);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    r.setlength(20);
    cout<<r.getlength()<<endl;


    return 0;
}