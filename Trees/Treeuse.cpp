#include<iostream>
#include"TreeNode.h"
using namespace std;
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
    TreeNode<int>*root=new TreeNode<int>(10);
    TreeNode<int>*Node1=new TreeNode<int>(20);
    TreeNode<int>*Node2=new TreeNode<int>(30);
    root->children.push_back(Node1);
    root->children.push_back(Node2);
    printTree(root);


}
