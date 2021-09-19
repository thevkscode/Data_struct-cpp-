#include<iostream>
#include<climits>
using namespace std;
class stackusingarray{
  int *data;
  int nextindex;
  int capacity=4;
  public:
  //constructor call
 stackusingarray()
  {
      data=new int[capacity];
        nextindex=0;
  }
  //to insert an element
  void push(int element)
  {
      if(nextindex==capacity)
      {
         // cout<<"Stack Full\n";

         //using dynamic array to remove the size constraint
         int *newdata=new int[2*capacity];
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
  int top()
  {
       if(isempty())
      {
          cout<<"Stack is empty\n";
          return INT32_MIN;
      }
      return data[nextindex-1];
  }  
  //function to delete topmost element 
  int pop()
  {
      if(isempty())
      {
          cout<<"Stack is empty\n";
          return INT32_MIN;
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