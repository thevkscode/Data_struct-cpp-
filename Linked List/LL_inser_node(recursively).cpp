//You have been given a linked list of integers.
 //Your task is to write a function that inserts a node at a given position, 'pos'.

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

Node* insertNode(Node *head, int i, int data) {
	// Write your code here
    if(head==NULL)
        return head;
   if(i==0)
    {
        Node*n=new Node(data);
       n->next=head;
       head=n;
    }
    Node*x=insertNode(head->next,i-1,data);
    head->next=x;
    return head;
}