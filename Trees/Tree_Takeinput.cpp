#include<iostream>
#include"TreeNode.h"
using namespace std;
//take input function using recursion{not a good approach}
//user should have knowledege of recursion to use takeinput fucntion :)
TreeNode<int>* TakeInput()
{
    int rootdata;
    cout<<"Enter data:"<<endl;
    cin>>rootdata;
    TreeNode<int>*root=new TreeNode<int>(rootdata);
    int n;
    cout<<"Enter the No. of chidren of:"<<rootdata<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    TreeNode<int>*child=TakeInput(); 
    root->children.push_back(child);
    }
    return root;
}
//function to print tree
void printTree(TreeNode<int>*root)
{
    if(root==NULL)//this is edge case, not a base case.
    return;
    cout<<root->data<<":";
    for(int i=0;i<root->children.size();i++)
    {
        cout<<root->children[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->children.size();i++)
    {
        printTree(root->children[i]);
    }
}
int main()
{
    TreeNode<int>*root=TakeInput();
    printTree(root);
    return 0;
}