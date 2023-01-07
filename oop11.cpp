// Hybrid inheritance
// Diamond Problem
/*
        a
       / \
      b   c
       \ /
        d
*/
#include<bits/stdc++.h>
using namespace std;

class Vehicle {
	private :
		int maxSpeed;

	protected :
		int numTyres;

	public :
		string color;

		
	Vehicle() {
		cout << "Vehicle's default constructor " << endl;
	}


	Vehicle(int z) {
		cout << "Vehicle's Parametrized constructor " << endl;
		maxSpeed = z;
	}

	~Vehicle() {
		cout << "Vehicle's Destructor " << endl;
	}

};
class Truck : public Vehicle {
    public:
    Truck()
    {
        cout<<"Truck constructor:\n";
    }
    ~Truck()
    {
        cout<<"Truck destructor:\n";
    }
};
class Car : public Vehicle {
	public :
		int numGears;
        Car ()
        {
            cout<<"Car's default constructor:\n";
        }

		Car(int x, int y) : Vehicle(x) {
			cout << "Car's constructor " << endl;
			numGears = y;
		}

		~Car() {
			cout << "Car's Destructor " << endl;
		}


		void print() {
			cout << "NumTyres : " << numTyres << endl;
			cout << "Color : " << color << endl;
			cout << "Num gears : " << numGears << endl;
			//		cout << "Max Speed : " << maxSpeed << endl;
		}



};

class bus:public Car,public Truck
{
    public:
    bus()
    {
        cout<<"Bus constructor "<<endl;
    }
    ~bus()
    {
        cout<<"BUS destructor:\n";
    }
};

int main()
{
    bus b;
}