//bubble sort:- compare two adjecent number and swap, after every round, the largest 
//value will shift to last place of that round
#include<iostream>
using namespace std;
void bubble(int a[], int n)
{
    for(int i=0;i<n-1;i++)//number of rounds
    {
        for (int j=0;j<n-1-i;j++)//foreach round
        {
            if(a[j]>a[j+1])//comparing 2 adjacent element and if first is larger than 2nd the swap
            {
                //swapping
                int temp= a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }//at this stage ,the largest element reaches at the last of the round
        }//at this stage, our array is completly sorted
    }
}
int main()
    {  int n;
        cout<<"Enter the length of array: \n";
        cin>>n;
        int a[n];
        cout<<"Enter the elments: \n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        bubble(a,n);//function calling
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        
       return 0; 
    }