

// OPERATOR OVERLOADING 

#include<iostream>
using namespace std;


class Fraction 
{
	private :

		int numerator;
		int denominator;

	public :

		Fraction(int numerator, int denominator) 
        {
			this -> numerator = numerator;
			this -> denominator = denominator;
		}
		void print() 
        {
			cout << this -> numerator << "/" << denominator << endl;
		}


		void simplify() 
        {
			int gcd = 1;
			int j = min(this -> numerator, this -> denominator);
			for(int i = 1; i <= j; i++) {
				if(this -> numerator % i == 0 && this -> denominator % i == 0) {
					gcd = i;
				}
			}
			this -> numerator = this -> numerator / gcd;
			this -> denominator = this -> denominator / gcd;
		}

        Fraction add(Fraction  &f2)
        {
            int lcm =denominator*(f2.denominator);
            int x=(lcm/denominator);
            int y=(lcm/f2.denominator);
            int u=x * numerator+ ( y* f2.numerator);
            Fraction f(u,lcm);
            f.simplify();
            return f;
        }

        // + operator overloading 

        Fraction operator+(Fraction const &f2) const
        {
            int lcm =denominator*(f2.denominator);
            int x=(lcm/denominator);
            int y=(lcm/f2.denominator);
            int u=x * numerator+ ( y* f2.numerator);
            Fraction f(u,lcm);
            f.simplify();
            return f;
        }
        Fraction operator*(Fraction f2) const
        {
            int n=numerator*(f2.numerator);
            int d=denominator*(f2.denominator);
            Fraction fk(n,d);
            fk.simplify();
            return fk;
        }

        // PREINCREAMENT OPERATOR OVERLOADING 

        Fraction& operator++()
        {
            numerator=numerator+denominator;
            simplify();
            return *this;
        }

        // POSTINCREAMENT OPERATOR OVERLOADING 

        Fraction operator++(int )
        {
            Fraction fnew(numerator,denominator);
            this->numerator=numerator+denominator;
            simplify();
            fnew.simplify();
            return fnew;
        } // nesting did not takes place 

        // OVERLOADING += OPRERATOR 
        Fraction& operator+=(Fraction  &f2)
        {
            *this=add(f2);
            simplify();
            return *this;

        }


};

int main()
{
    Fraction f1(5,1);
    Fraction f2(7,1);
    Fraction f3=f1+f2 ;
    f3.print();
    Fraction f4=f1*f2;
    f4.print();
    //f3=(++f1);
    //f3.print();
  /*  f3=++(++f1);
    f3.print();
    f1.print();*/
  /*  f4=f1++;
    f4.print();
    f1.print(); */

    //Fraction f5+=f1;
    (f1+=f2)+=f2;
    f1.print();


}