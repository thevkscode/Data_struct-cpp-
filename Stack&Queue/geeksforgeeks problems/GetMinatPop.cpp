/*
You are given an array A of size N. You need to first push the elements of the array into 
a stack and then print minimum in the stack at each pop.

Example 1:

Input:
N = 5
A = {1 2 3 4 5}
Output: 
1 1 1 1 1
Explanation: 
After pushing elements to the stack, 
the stack will be "top -> 5, 4, 3, 2, 1". 
Now, start popping elements from the stack
popping 5: min in the stack is 1.popped 5
popping 4: min in the stack is 1. popped 4
popping 3: min in the stack is 1. popped 3
popping 2: min in the stack is 1. popped 2
popping 1: min in the stack is 1. popped 1
Example 2:

Input: 
N = 7
A = {1 6 43 1 2 0 5}
Output: 
0 0 1 1 1 1 1
Explanation: 
After pushing the elements to the stack, 
the stack will be 5->0->2->1->43->6->1. 
Now, poping the elements from the stack:
popping 5: min in the stack is 0. popped 5
popping 0: min in the stack is 0. popped 0
popping 2: min in the stack is 1. popped 2
popping 1: min in the stack is 1. popped 1
popping 43: min in the stack is 1. 
            popped 43
popping 6: min in the stack is 1. popped 6
popping 1: min in the stack is 1. popped 1.

 

Your Task:
Since this is a function problem, you don't need to take any input. Just complete the 
provided functions _push() and _getMinAtPop(). The _push() function takes an array as 
parameter, you need to push all elements of this array onto a stack and return the stack.
 The _getMinAtPop() accepts a stack as a parameter which is returned by _push() function
  and prints minimum in the stack at each pop separated by spaces.


Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).


Constraints:
1 <= Ai <= 107
*/
/***********************************************************************************************/

// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

 // } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
stack<int>as;
stack<int> _push(int arr[],int n)
{
   // your code here
   stack<int>ms;
   as.push(arr[0]);
   for(int i=0;i<n;i++)
   {
       if(as.top()>=arr[i])
       {
           as.push(arr[i]);
       }
      ms.push(arr[i]);
   }
   return ms;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>ms)
{
    // your code here
    while(!ms.empty())
    {
        cout<<as.top()<<" ";
        if(ms.top()==as.top())
        {
            as.pop();
        }
        ms.pop();
    }
    
}

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}

  // } Driver Code Ends