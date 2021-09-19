template<typename T>
class Node
{
     public:
  T data;
  Node<T>*next;
 
  Node(T data)
  {
      this->data=data;
      next=NULL;
  }
};
  template<typename T>
  class queueusingLL{
      Node<T>*head,*tail;
     int size;
      public:
      //constructor call
      queueusingLL()
      {
          head=NULL;
          tail=NULL;
          size=0;
      }
      //getsize fucntion to return the size of queue
      int getsize()
      {
          return size;
      }
      //isempty function to check wether the queue is empty or not
      bool isempty()
      {
          return size==0;
      }
      //front sunction to get the value of element in front of queue
      T front()
      {
          if(size==0)
          {
          cout<<"QUEUE EMPTY!!"<<endl;
          return 0;
          }
          return head->data;

      }
      //enqueue function to insert a new element in the queue
      void enqueue(T element)
      {
          Node<T>*newnode=new Node<T>(element);
          if(head==NULL)
          {
              head=tail=newnode;
              size++;
              return;
          }
          tail->next=newnode;
          tail=newnode;
          size++;
      }
      //dequeue function to remove an element from queue
      T dequeue()
      {
          if(size==0)
          {
            cout<<"QUEUE EMPTY!!"<<endl;
            return 0;
          }
          Node<T>*h=head;
          T ans=head->data;
          head=head->next;
          delete h;
          size--;
          return ans;
      }
  };
