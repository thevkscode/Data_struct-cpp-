#include<iostream>
#include<climits>
using namespace std;
template<typename T>
class stackusingarray{
  T *data;
  int nextindex;
  int capacity=4;
  public:
  //constructor call
 stackusingarray()
  {
      data=new T[capacity];
        nextindex=0;
  }
  //to insert an element
  void push(T element)
  {
      if(nextindex==capacity)
      {
         // cout<<"Stack Full\n";

         //using dynamic array to remove the size constraint
         T *newdata=new T[2*capacity];
         for(int i=0;i<capacity;i++)
         {
             newdata[i]=data[i];
         }
         delete [] data;
         data=newdata;
         capacity=2*capacity;
      }
      data[nextindex]=element;
      nextindex++;
      return;
  }
  //function to give the value of topmost element in stack
  T top()
  {
       if(isempty())
      {
          cout<<"Stack is empty\n";
          return 0;
      }
      return data[nextindex-1];
  }  
  //function to delete topmost element 
  T pop()
  {
      if(isempty())
      {
          cout<<"Stack is empty\n";
          return 0;
      }
      nextindex--;
      return data[nextindex];
  }
    int size()
    {
        return nextindex;
    }
    bool isempty()
    {
        /*if(nextindex==0)
        return true;
        else
        return false;*/
        return nextindex==0;
    }
};