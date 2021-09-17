#include<iostream>
using namespace std;
int main()
{
     /* int n;
    cout<<"enter n";
    cin>>n;
    //int n1=(n+1)/2;        //*deviding the pattern in two half 
                               //here n should be an odd number
  int n2=n1-1;
    int i=1;
    while(i<=n1)
    {
        int j=1;
        while(j<=n1-i)
        {
            cout<<" ";   //printing space of upper half
            j++;
        }
      
        int k=1;
        while(k<=2*i-1)
        {
            cout<<k; //for printing number
            k++;
        }
        cout<<endl;
        i++;
        }
          //code starting for lower half
        int p=n2;
        while(p<=n2 &&p>0) 
        {
            int q=1;
            while(q<=n2-p+1)
            {
                cout<<" ";//for printing space
                q++;
            }
            int r=1;
            while(r<=2*p-1)
            {
                cout<<r; //for printing number
                r++;
            }
            cout<<endl;
            p--;
        }*/
        int i = 1, k=1;
int m[7][7]={0}; // Initialises all the elements of the array equal to 0, you will
// study about arrays in your further sessions.
while (i <= 7)
{
int j = 1;
while (j <= 7)
{
if (j == i || 8-i == j)
m[i-1][j-1]=k;
j++;
}
if (i < 4)
k++;
else
--k;
i++;
}
i = 0;
while (i < 7)
{
int j = 0;
while (j < 7)
{
if(m[i][j]==0)
cout << " ";
else
cout << m[i][j];
j++;
}
i++;
cout << endl;
}
return 0;
}