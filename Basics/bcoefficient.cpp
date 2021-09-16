#include<iostream>
#include<cmath>
using namespace std;

int main()
{ system("cls");
    double a,b;
    cout<<"enter the no,\n";
    cin>>a;
    cout<<"enter the term of which coefficient is required\n";
    cin>>b;
    double c=a-b+1;
    double factorialn(double);
     double factorialr(double);
      double factorialnr(double);
 double n= factorialn(a);
   double r= factorialr(b);
   double nr=factorialnr(c);
   double x,y;
   x=n/r;
   y=x/nr;
   cout<<"the binary coefficient of this term is:-\n"<<y;
   return 0;
}
  
  
    double factorialn(double n)
{ 
    double factn=1;
    for(double i=1;i<=n;i++)
    {
        factn=factn*i;
    }
       return(factn);
}


double factorialr(double r)
{
    double factr=1;
    for(double i=1;i<=r-1;i++)
    {
        factr=factr*i;
    }
       return(factr);
}


double factorialnr(double nr)
{
    double factnr=1;
    for(double i=1;i<=nr;i++)
    {
        factnr=factnr*i;
    }
       return(factnr);
}