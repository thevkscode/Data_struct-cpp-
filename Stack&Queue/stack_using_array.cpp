#include<iostream>
#include<climits>
using namespace std;
#include"creating_stack_using_array.cpp"
int main()
{
    stackusingarray s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.top()<<endl;
    cout<<s.isempty()<<endl;

}