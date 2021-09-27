#include<iostream>
#include<queue>
#include"TreeNode.h"
using namespace std;
TreeNode<int>*TakeInputlevelwise()
{
    int rootdata;
    cout<<"Enter the root data\n";
    cin>>rootdata;
    TreeNode<int>*root=new TreeNode<int>(rootdata);
    queue<TreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(!pendingnodes.empty())
    {
        TreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
        cout<<"Enter the num of children of "<<front->data<<" :\n";
        int numchild;
        cin>>numchild;
        for(int i=0;i<numchild;i++)
        {
            int childdata;
            cout<<"Enter "<<i<<"th child of"<<front->data<<" : \n";
            cin>>childdata;
            TreeNode<int>*child=new TreeNode<int>(childdata);
            front->children.push_back(child);
            pendingnodes.push(child);

        }
      
    }
      return root;
}
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
//printing via preOrderTraversal;
void preOrderTraversal(TreeNode<int>*root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    for(int i=0;i<root->children.size();i++)
    {
        preOrderTraversal(root->children[i]);
    }
}
int main()
{
    TreeNode<int>*root=TakeInputlevelwise();
    printTree(root);
    cout<<"PreOrder Traversal Print: ";
    preOrderTraversal(root);
    return 0;
}