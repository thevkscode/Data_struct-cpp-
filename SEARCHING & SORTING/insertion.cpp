//insertion sort uses the concept that the firsst elememt is already sorted and then we will pick
//elements from the remaining one in order and place it in correct position
#include<iostream>
using namespace std;
void insertion(int a[], int n)
{
    for(int i=1;i<n;i++)//n=1 rounds
    {
        int current=a[i];//done to save the value of a[i]as it will be lost in shifting the value
        int j;//need to initialize here as we have to use the value of j after the for loop of j
        for( j=i-1;j>=0;j--)
        {
            if(current<a[j])
            {
                a[j+1]=a[j];//no swapping, only shifting take place
            }
            else
            {
                break;
            }
           
        }
         a[j+1]=current;//the picked element is placed at its correct podition
    }
.
int main()
{
    
   int n;
        cout<<"Enter the length of array: \n";
        cin>>n;
        int a[n];
        cout<<"Enter the elments: \n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            
        }
        insertion(a,n);//function calling
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        
       return 0; 
}