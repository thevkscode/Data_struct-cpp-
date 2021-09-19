#include<iostream>
using namespace std;
template<typename T>
//creating class for Linked List
class Node{
     public:
    Node<T>* next;
    T data;
   public:
Node(T data){
this->data=data;
this->next=NULL;
}
};
template<typename T>
//creating class for stack using Linked List
class stackusingLL
{
Node<T>*head;
int count;//to figure out the size of stack
public:
stackusingLL()
{
    head=NULL;
    count=0;
}
//size function, which will give the size of stack at that moment
int size()
{
    return count;
}
//isempty function will return  true if stack is empty n false in else conditons
bool isempty()
{
    return (head==NULL);
}
//push function will insert new element in the stack
void push(T element)
{
    Node<T>*newhead=new Node<T>(element);
    if(head==NULL)
    {
        head=newhead;
        count++;
        return ;
    }
    newhead->next=head;
    head=newhead;
    count++;
    return;
}
//pop() funciion will print and remove the top element from the stack
void pop()
{
    if(head==NULL)
    {
        cout<<"Stack is empty\n";
        return;
    }
    Node<T>*ans=head;
    cout<<head->data<<endl;
   // delete head;
    head=head->next;
    delete ans;
    count--;
    return;
}
};
