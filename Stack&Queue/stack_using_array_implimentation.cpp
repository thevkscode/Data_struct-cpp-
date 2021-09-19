#include<iostream>
#include"stack_using_template(creation).cpp"
using namespace std;
int main()
{
    stackusingarray<char> s1;
    s1.push('A');
    s1.push('B');
    s1.push('C');
    s1.push('D');
    s1.push('E');
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;
   
}