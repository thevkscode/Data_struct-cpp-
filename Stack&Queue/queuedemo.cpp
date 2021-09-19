//QUEUE WORKS ON THE PRINCIPLE OF FIFO
//It is implicit data structure
#include<iostream>
using namespace std;
#include"queueusingarray.cpp"
int main()
{
    queueusingarray<char>s;
   cout<<s.dequeue()<<endl;//removing element when queue is empty
   //inserting elements in queue
    s.enqueue(101);
    s.enqueue(102);
    s.enqueue(103);
    s.enqueue(104);
    s.enqueue(105);
    s.enqueue(106);
    cout<<s.front()<<endl;//printing front element
    cout<<s.dequeue()<<endl;//deleting first element
    cout<<s.dequeue()<<endl;//deleting first element
    cout<<s.dequeue()<<endl;//deleting first element
    cout<<s.dequeue()<<endl;//deleting first element
    cout<<s.isempty()<<endl;//checking if the queue is empty or not
    cout<<s.getsize()<<endl;
    return 0;
}