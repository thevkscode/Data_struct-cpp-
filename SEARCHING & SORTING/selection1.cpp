// selection short using the method taught
#include<iostream>
using namespace std;
void selection(int a[], int n)
{
    
    for(int i=0;i<n-1;i++) //no. of rounds(as after n-1 rounds the last elemnt automatically get sorted so i will bw till n-1)
    {
        int min=a[i], minin=i,temp;//after every round the i elemets are sorted so we check from the next one
        //for each round,process to find the minimum value
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<min)   
            {
                min=a[j];
                minin=j;
            }
    //at this stage, we are having the minimum value of a perticular round
        }
 //swapping minimum with the starting element of each round
        temp=a[i];
        a[i]=min;//instead ofa[minin] we can also use a[minin]
        a[minin]=temp;

    }
}
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
        selection(a,n);//function calling
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        return 0;
    }
