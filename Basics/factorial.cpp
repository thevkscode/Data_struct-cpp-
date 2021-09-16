#include<iostream>
#include<cmath>
using namespace std;
double factorial(double n)
{
    double fact=1;
    for(double i=1;i<=n;i++)
    {
        fact=fact*i;
    }
        cout<<"factorial of "<<n<<"is:"<<fact;
    
}
int main()
{
    double a;
    cout<<"enter the no,\n";
    cin>>a;
    double factorial(double);
    factorial(a);
    return 0;
}