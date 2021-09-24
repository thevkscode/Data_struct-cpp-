#include<iostream>
using namespace std;
class student
{
public:
int age;
int rolln;
student(){
    cout<<"Constructor 1 is called\n";        //default constructor{as we created our own constructor, the inbuilt constructr get inaccessible}
}
student(int r)
{
    cout<<"constructor 2 is called\n";//constructor with one arument
    rolln=r;
}
student(int a, /*int r*/ int rolln)
{
    cout<<"constructor 3 is called\n";    //constructor with 2 arguments
    age=a;
    //rolln=r;
    
    //(*this).rolln=rolln;
    //or
    this->rolln=rolln;
}
void gets()
{
    cout<<age<<" "<<rolln<<endl;
    return;
} 
~student()
{
   cout<<"destructor is called\n";
}
};