#include<iostream>
using namespace std;
#include"class_fraction.cpp"
int main()
{
    int n1,d1,n2,d2,x;
    cout<<"enter the numerator & denominator of 1st number: ";
    cin>>n1>>d1;
    fraction f1(n1,d1);
    cout<<"enter the numerator & denominator of 2nd number:\n";
    cin>>n2>>d2;
    fraction f2(n2,d2);
    cout<<"Enter 1 for addition and 2 for multiplication: ";
    cin>>x;
    switch (x)
    {
    case 1:
     f1.add(f2);
    cout<<"sum of two fractional number is:\n";
    f1.print();
        break;
    case 2:
    f1.multiply(f2);
    cout<<"Product of two fractional numbers is:\n";
    f1.print();
        break;
    
    default:
    cout<<"Bad choice";
        break;
    }
   
    return 0;
}