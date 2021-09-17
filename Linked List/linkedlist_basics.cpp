#include<iostream>
#include"linkedlist_node.cpp"
using namespace std;
//O(n^2) complexity
/*node* takeiput()
{
    int data;
    cin>>data;
    node*head=NULL;
    while(data!=-1)
    {
        node*n=new node(data);
        if(head==NULL)
        head=n;
        else{
            node*temp=head;
            while(temp->next!=NULL)
            {
                temp=temp->next;
            }
            temp->next=n;
        }
        cin>>data;
        
    }
    return head;
}*/

node* takeinputbetter()
{
    int data;
    cin>>data;
    node*head=NULL;
    node*tail=NULL;
    while(data!=-1)
    {
        node*n=new node(data);
        if(head==NULL)
      {  head=n;
        tail=n;
      }

        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;           
    }
    return head;
}

void print(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
       temp= temp->next;
    }
    cout<<endl;
}
int main()
{
    //static node
    /*node n1(10);
    node*start=&n1;
    node n2(20);    
    node n3(30);    
    node n4(40);    
    node n5(50);    
    n1.next=&n2;
    n2.next=&n3;    
    n3.next=&n4;    
    n4.next=&n5;*/ 

    //dynamic creation   
    /*node*n1= new node(10);
    node*n2= new node(20);
    node*n3= new node(30);
    node*n4= new node(40);
    node*n5= new node(50);
    node*start=n1;
    n1->next=n2;
    n2->next=n3;
    n3->next=n4;
    n4->next=n5;
    print(start);
    print(start);*/
    node*head=takeinputbetter();
    
    print(head);

    return 0;
}
