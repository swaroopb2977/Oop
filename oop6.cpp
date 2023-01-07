// DYNAMIC ARRAY 

#include<iostream>
using namespace std;


class dyarr
{

    int *data;
    int nextindex;
    int capacity;

    public:

    dyarr()
    {
        data = new int [5];
        nextindex=0;
        capacity =5;
    }

    void add(int element)
    {
        if(nextindex == capacity )
        {
            int *newdata=new int[2*capacity];
            for(int i=0;i<capacity ;i++)
            {
                newdata[i]=data[i];
            }

            delete []data;
            data= newdata;
            capacity *=2;
        }

        data[nextindex]=element;
        nextindex++;
    }

    int get(int i)
    {
        if(i<nextindex)
        {
            return data[i];
        }
        else{
            return -1;
        }
    }

    void add(int i ,int element)
    {
        if(i<nextindex)
        {
            data[i]=element;
        }
        else if(i==nextindex)
        {
            data[nextindex]=element;
            nextindex++;
        }

        else
        {
            return ;
        }
    }

    void print()
    {
        for(int i=0;i<nextindex;i++)
        {
            cout<<data[i]<<" ";
        }

        cout<<"\n";
    }


};


int main()
{
    dyarr d1;
    for(int i=0;i<10;i++)
    {
        d1.add(i);
    }
    d1.print();
}