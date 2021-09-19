/*
Given a string S, composed of different combinations of '(' , ')', '{', '}', '[', ']'. 
The task is to verify the validity of the arrangement.
Note: Ignore the precedence of brackets.

Example 1:

Input:
S = ()[]{}
Output: 1
Explanation: The arrangement is valid.
 

Example 2:

Input:
S = ())({}
Output: 0
Explanation: Arrangement is not valid.
 

Your Task:  
You dont need to read input or print anything. Complete the function valid() which takes S as
 input and returns a boolean value denoting whether the arrangement is valid or not.


Expected Time Complexity: O(N) where N is the length of S.
Expected Auxiliary Space: O(N) 


Constraints:
1 <= N <= 104
*/
/*****************************************************************************************************************************/

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}// } Driver Code Ends


bool valid(string s)
{
    if(s.size()==0)
    return true;
    // code here
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='['||s[i]=='{'||s[i]=='(')
        {
            st.push(s[i]);
        }
        if(s[i]==']'||s[i]=='}'||s[i]==')')
        {
            if(st.empty())
            {
                return false;
            }
        }
        if(s[i]==']'&&st.top()=='['||s[i]=='}'&&st.top()=='{'||s[i]==')'&&st.top()=='(')
        {
            st.pop();
        }
    }
    if(st.empty())
    return true;
    else
    {
        return false;
    }
    
    
}