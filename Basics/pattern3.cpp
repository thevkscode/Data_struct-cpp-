#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter the value of n\n";
   cin>>n;
   for(int i=1;i<=n;i++)
   {
       for(int j=n;j>=i+1;j--)
       {
           cout<<" ";
       }
       for(int k=1;k<=i;k++)
       {
           cout<<"*";
       }
       cout<<endl;
   }
   

    return 0;
}

 