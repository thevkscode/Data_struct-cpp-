/*
Given an integer K and a queue of integers, we need to reverse the order of the first K elements
 of the queue, leaving the other elements in the same relative order.

Only following standard operations are allowed on queue.

enqueue(x) : Add an item x to rear of queue
dequeue() : Remove an item from front of queue
size() : Returns number of elements in queue.
front() : Finds front item.
Example 1:

Input:
5 3
1 2 3 4 5

Output: 
3 2 1 4 5

Explanation: 
After reversing the given
input from the 3rd position the resultant
output will be 3 2 1 4 5.

Example 2:

Input:
4 4
4 3 2 1

Output: 
1 2 3 4

Explanation: 
After reversing the given
input from the 4th position the resultant
output will be 1 2 3 4.
Your Task:
Complete the provided function modifyQueue that takes queue and k as parameters and returns a 
modified queue. The printing is done automatically by the driver code.

Expected TIme Complexity : O(n)
Expected Auxilliary Space : O(n)

Constraints:
1 <= N <= 1000
1 <= K <= N

Note:The Input/Ouput format and Example given are used for system's internal purpose,
 and should be used by a user for Expected Output only. As it is a function problem,
  hence a user should not read any input from stdin/console. The task is to complete the
   function specified, and not to write the full code.
*/

/**********************************************************************************************/

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        while (n-- > 0) {
            int a;
            cin >> a;
            q.push(a);
        }
        queue<int> ans = modifyQueue(q, k);
        while (!ans.empty()) {
            int a = ans.front();
            ans.pop();
            cout << a << " ";
        }
        cout << endl;
    }
}// } Driver Code Ends


// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    if(q.size()==0||q.size()==1)
    return q;
    stack<int>s;
    queue<int>q2;
    while(k--)
    {
        s.push(q.front());
        q.pop();
    }
    while(q.size()!=0)
    {
        q2.push(q.front());
        q.pop();
    }
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(q2.size()!=0)
    {
      q.push(q2.front());
      q2.pop();
    }
    return q;
}
    