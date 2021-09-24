#include<iostream>
using namespace std;
class fraction
{
    private:
    int numerator,denominator;
    public:
    fraction(int numerator, int denominator)
    {
        this->numerator=numerator;
        this->denominator=denominator;
    }
    void simplify(int numerator, int denominator)
    {
        int gcd=1;
        int j=min(this->numerator, this->denominator);
        for(int i=1;i<=j;i++)
        {
            if(this->numerator%i==0&&this->denominator%i==0)
            gcd=i;
        }
        this->numerator=numerator/gcd;
        this->denominator=denominator/gcd;
    }

    void add(fraction const &f2)//call by reference allowed use to use the same variable helping in avoiding use of extra space 
    //and const is used so that the third person should not be able to change the values of f2 i.e, t is read only memory,

    {
        int lcm=denominator*f2.denominator;
        int x=lcm/denominator;
        int y=lcm/f2.denominator;
        int num=x*numerator+y*f2.numerator;
        numerator=num;
        denominator=lcm;
        simplify(numerator,denominator); 
    }
    void print()
    {
        cout<<numerator<<"/"<<denominator;
    }
    void multiply(fraction const &f2)
    {
        numerator=numerator*f2.numerator;
        denominator=denominator*f2.denominator;
        simplify(numerator,denominator);

    }
};