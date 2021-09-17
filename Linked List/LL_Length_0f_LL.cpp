//For a given singly linked list of integers, find and return its length. 
//Do it using an iterative method.
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

int length(Node *head)
{
   int count=0;
    Node* temp=head;
  //Write your code here
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}
