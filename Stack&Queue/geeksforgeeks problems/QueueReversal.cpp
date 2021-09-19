/*Given a Queue Q containing N elements. The task is to reverse the Queue.
 Your task is to complete the function rev(), that reverses the N elements of the queue.*/
 /***************************************************************************************/

 // { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;
queue<int> rev(queue<int> q);
int main()
{
    int test;
    cin>>test; 
    while(test--)
    {
    queue<int> q; 
    int n, var; 
    cin>>n; 
    while(n--)
    {
        cin>>var; 
        q.push(var);
    }
    queue<int> a=rev(q); 
    while(!a.empty())
    {
        cout<<a.front()<<" ";
        a.pop();
    }
    cout<<endl; 
    }
}// } Driver Code Ends


//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
    //using recursion
   /* if(q.size()==0||q.size()==1)
    return q;
    int a=q.front();
    q.pop();
   q= rev(q);
    q.push(a);
    return q;*/
    
    /*optimized code*/
    
    stack<int>helper;
    while(!q.empty())
    {
        helper.push(q.front());
        q.pop();
    }
    while(!helper.empty())
    {
        q.push(helper.top());
        helper.pop();
    }
    return q;
}