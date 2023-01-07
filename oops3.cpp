//template class 

#include<iostream>

using namespace std;

template<class t>

class arithimatic
{
    private:

    t a;
    t b;
    

    public:

    arithimatic(t a,t b);
    t add()
    {
        t c;
        c=a+b;
        return c;
    }
    t sub()
    {
        t d;
        d=a-b;
         return d;

    }
};

template<class t>

arithimatic<t>::arithimatic(t a,t b)
{
    this->a=a;
    this->b=b;
}

int main()
{
    arithimatic<int> ar(10,5);
    cout<<ar.add();


    return 0;
}



