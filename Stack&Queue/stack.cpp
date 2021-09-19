#include<iostream>
using namespace std;
#include"stack_using_LL_template.cpp"
int main()
{
    stackusingLL<char> s1;
    s1.push(101);
    s1.push(102);
    s1.push(103);
    s1.push(104);
    s1.push(105);
    s1.push(106);
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
    s1.pop();
   s1.pop();
    cout<<"size : "<<s1.size()<<endl;
    cout<<"is stack empty : "<<s1.isempty()<<endl;
    return 0;
}