// Inheritance :-

#include "oop8.cpp"

class car:private vehicle{

    public:
    int numgears;

    car(int a,int b,string c)
    {
        numTyres=a;
        numgears=b;
        color=c;

    }

    void print()
    {
        cout<<"Numtyers:"<<numTyres<<endl;
        cout<<"Color:"<<color<<endl;
        cout<<"Numgear:"<<numgears<<endl;
    }
};

int main()
{
    /*
    vehicle v;
    v.color="blue";
    cout<<v.color;*/


    car c(10,20,"red");
    c.print();

}