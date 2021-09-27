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
            cout<<front->children[i]->data<<",";
            pendingnodes.push(front->children[i]);
        }
        cout<<endl;
    }
}
//FUNCTION WHICH RETURNS NUMBER OG NODES IN A TREE
int numofnodes(TreeNode<int>*root)
{
    int ans=1;
    for(int i=0; i<root->children.size();i++)
    {
        ans+=numofnodes(root->children[i]);
    }
    return ans;
}
int main(){
     TreeNode<int>*root=TakeInputlevelwise();
    printTreeLevelwise(root);
    cout<<"TOTAL NODES IN THIS TREE:"<<numofnodes(root);
    return 0;

}