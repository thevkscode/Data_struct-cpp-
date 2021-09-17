/*You have been given a singly linked list of integers along with an integer 'N'.
 Write a function to append the last 'N' nodes towards the front of the singly linked list
  and returns the new head to the list.*/

  /****************************************************************
 
    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/

Node *appendLastNToFirst(Node *head, int n)
{
    if(head==NULL)
        return head;
    Node*t=head;
    //checking the length of likedlist along with it traversing to find 
    //the address of last element in which we will replace null with head
   int l=0;
    while(t->next!=NULL)//not t!=NULL becoz we have to stop at last element even though the count remain 1 lesser than the actual one
    {
        l++;
        t=t->next;
    }
    
    int i=l-n+1;//1 is added to adjust the count
    if(i==0)//if i==0, it means we are having the same LL
        return head;
    t->next=head;//replacing null with head to connect last with first one
    int count=0;
    Node*temp=head;
    //traversing again to find the addrress of element after which we have to break the LL
    while(count<i-1)
    {
        count++;
        temp=temp->next;
    }
    Node*b=temp->next;//saving the addrress of node 
    temp->next=NULL;//this is last element of modified list
    head=b;//starting element of the modified list
    return head;
       //Write your code here
}
