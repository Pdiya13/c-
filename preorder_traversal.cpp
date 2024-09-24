#include<iostream>
#include <vector>

using namespace std;

class Node
{
    public: 

    int data;
    Node* left;
    Node* right;

    Node(int data)
    {
        this->data=data;
        left=right=nullptr;
    }
};

static int idx=-1;

Node* build_tree (vector <int> nodes)
{
    idx++;
    if(nodes[idx] == -1)
    {
        return nullptr;
    }

    Node* currNode= new Node(nodes[idx]);
    currNode->left = build_tree(nodes);
    currNode->right = build_tree(nodes);

    return currNode;
}

void preorder(Node* root)
{
    if(root == nullptr)
    {
        return; 
    }

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root)
{
    if(root == nullptr)
    {
        return; 
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root)
{
    if(root == nullptr)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main()
{
    vector <int> nodes;
    nodes.push_back(1);
    nodes.push_back(2);
    nodes.push_back(4);
    nodes.push_back(-1);
    nodes.push_back(-1);
    nodes.push_back(5);
    nodes.push_back(-1);
    nodes.push_back(-1);
    nodes.push_back(3);
    nodes.push_back(-1);
    nodes.push_back(6);
    nodes.push_back(-1);
    nodes.push_back(-1);

    Node* root = build_tree(nodes);

    cout<<"root is:"<<root->data<<endl;

    preorder(root);
    cout<<endl;
    return 0;
}