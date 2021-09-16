//find last 2 digit of nth fibonacc number
#include<iostream>
using namespace std;
int main()
{
    int N;
    cin>>N;
    unsigned long long int a=0,b=1,c,sum=0;
    for(unsigned long long int i=0;i<=N-1;i++)
    {
        c=a+b;
        a=b;
        b=c;
        sum+=a;
    }
    cout<<a<<endl<<sum<<endl;
    return 0;
}

/*unsigned long long int n, t1 = 0, t2 = 1, nextTerm = 0, i;
cout << "Enter the n value: ";
cin >> n;
if(n == 0 || n == 1) 
cout << n; 
else
nextTerm = t1 + t2;
for (i = 3; i <= n; ++i)
{
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
cout << t2;
}*/