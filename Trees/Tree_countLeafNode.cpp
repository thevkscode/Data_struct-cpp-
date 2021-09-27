#include<iostream>
#include<queue>
#include"TreeNode.h"
using namespace std;
//function to take input of tree levelwise
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
//efficient way to print tree level wise
void printTreeLevelwise(TreeNode<int>*root)
{
    queue<TreeNode<int>*>pendingnodes;
    pendingnodes.push(root);
    while(!pendingnodes.empty())
    {
        TreeNode<int>*front=pendingnodes.front();
        pendingnodes.pop();
        cout<<front->data<<":";
        for(int i=0;i<front->children.size();i++)
        {
            if(i==front->children.size()-1)
            cout<<front->children[i]->data;
            else
            cout<<front->children[i]->data<<",";
            pendingnodes.push(front->children[i]);
        }
        cout<<endl;
    }
}
//function to find the number of leaf nodes in a tree
int countleafNode(TreeNode<int>*root)
{
    if(root->children.size()==0)
       return 1;
       int count=0;
       for(int i=0;i<root->children.size();i++)
       {
           count+=countleafNode(root->children[i]);
       }
       return count;
}
int main(){
     TreeNode<int>*root=TakeInputlevelwise();
    printTreeLevelwise(root);
    cout<<"Number of leaf Nodes:"<<countleafNode(root);
    return 0;
}
