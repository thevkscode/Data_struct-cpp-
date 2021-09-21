/*
Find the largest rectangular area possible in a given histogram where the largest rectangle can
 be made of a number of contiguous bars. For simplicity, assume that all bars have the same 
 width and the width is 1 unit, there will be N bars height of each bar will be given by the 
 array arr.

Example 1:

Input:
N = 7
arr[] = {6,2,5,4,5,1,6}
Output: 12
Explanation: 


Example 2:

Input:
N = 8
arr[] = {7 2 8 9 1 3 6 5}
Output: 16
Explanation: Maximum size of the histogram 
will be 8  and there will be 2 consecutive 
histogram. And hence the area of the 
histogram will be 8x2 = 16.
Your Task:
The task is to complete the function getMaxArea() which takes the array arr[] and its size N as 
inputs and finds the largest rectangular area possible and returns the answer.

Expected Time Complxity : O(N)
Expected Auxilliary Space : O(N)

Constraints:
1 ≤ N ≤ 106
1 ≤ arr[i] ≤ 1012
*/
/***************************************************************************************************/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    vector<long long>NextSmallertoRight(long long arr[],int n)
    {
        vector<long long>right(n,0);
        stack<pair<long long,int>>s;
        for(int i=n-1;i>=0;i--)
        {
            while(!s.empty()&&s.top().first>=arr[i])
            {
                s.pop();
            }
            right[i]=(s.empty())?(n):(s.top().second);
            s.push({arr[i],i});
        }
        return right;
    }
     vector<long long> NextSmallertoLeft(long long arr[],int n)
    {
        vector<long long>left(n,0);
        stack<pair<long long,int>>s;
        for(int i=0;i<n;i++)
        {
            while(!s.empty()&&s.top().first>=arr[i])
            {
                s.pop();
            }
            left[i]=(s.empty())?-1:(s.top().second);
            s.push({arr[i],i});
        }
        return left;
    }
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        vector<long long>left= NextSmallertoLeft(arr,n);
        vector<long long>right=NextSmallertoRight(arr,n);
        vector<int>width(n,0);
        vector<long long>area(n,0);
        for(int i=0;i<n;i++)
        {
            //width[i]=right[i]-left[i]-1;
            area[i]=(right[i]-left[i]-1)*arr[i];
        }
        long long max=area[0];
        for(int i=1;i<n;i++)
        {
            if(area[i]>max)
            max=area[i];
        }
        return max;
    }
};


// { Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}
  // } Driver Code Ends