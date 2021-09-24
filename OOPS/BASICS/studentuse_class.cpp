#include<iostream>
using namespace std;
#include"student_class.cpp"
int main()
{
    student s1;//constructor 1 is called
    student *s2=new student;//dynamically allocation of obkect &&constrctor 1 is called
    student s3(1001);//constructor 2 is called
    student s4(20,1002);//constructor 3 is called
    student s5(s4);//copy constructor
    student s6=*s2;//copy constructor
    student s7=s4;
   cout<<"data of s7 is: ";
   s7.gets();

    delete s2;



    return 0;
}