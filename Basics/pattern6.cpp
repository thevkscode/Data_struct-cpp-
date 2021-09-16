#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"enter the value of n\n";
   cin>>n;
   for(int i=1; i<=n;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<"*"<<" ";
       }
       int space=2*n-2*i;
       for(int k=1;k<=space;k++)
       {
           cout<<" "<<" ";
       }
       for(int l=1; l<=i;l++)
       {
           cout<<"*"<<" ";
            }
       cout<<endl;

   }
   for(int p=n; p>=1;p--)
   {
       for(int q=p;q>=1;q--)
   {
       cout<<"*"<<" ";
   }
   int spc=2*n-2*p;
   for(int s=spc;s>=1;s--)
   {
       cout<<" "<<" ";
   }
   for(int r=p;r>=1;r--)
   cout<<"*"<<" ";
   cout<<endl;
   }
       return 0;
}

 