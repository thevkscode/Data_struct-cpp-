//Given a singly linked list of integers and position 'i',
 //delete the node present at the 'i-th' position in the linked list recursively.

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

Node *deleteNodeRec(Node *head, int pos) {
	//Write your code here
    if(head==NULL)
        return head;
   
    if(pos==0)
    {    Node*temp=head;
        head=head->next;
     delete temp;
     return head;
      
    }
    Node*x=deleteNodeRec(head->next,pos-1);
    head->next=x;
    return head;
}