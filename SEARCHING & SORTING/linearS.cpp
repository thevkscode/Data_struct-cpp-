//This is searching technique is used when array is unsorted and it is not the beat way to search
#include<iostream>
using namespace std;
int linear(int a[], int n, int x)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            return i;
        }
        else 
        break;

    }
    return -1;
}
int main()
{
    int n;
   cout<<" enter the number u want to search: "<<endl;
    int a[8]={1,2,3,4,5,6,7,8};
    linear(a,8,n);
    int b=linear(a,8,n);
    cout<<b<<endl;      
    return 0;
}
