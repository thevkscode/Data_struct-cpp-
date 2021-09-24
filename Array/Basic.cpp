#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b[10];
    b[2]=4;
    b[1]=2;
    cout<<b[2]<<endl;
    cout<<b<<endl;//this will print the memory location of b (in hexadecimal format where output starts with 0x represent hexadecomal format)
     return 0;
}