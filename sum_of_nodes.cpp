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
        left = right = nullptr;
    }
};

static int idx = -1;
Node* build_tree(vector <int> nodes)
{
    idx++;
    if(nodes[idx] == -1)
    {
        return nullptr;
    }

    Node* currNode = new Node(nodes[idx]);
    currNode->left = build_tree(nodes);
    currNode->right = build_tree(nodes);

    return currNode;
}

int countSum(Node* root)
{
    if(root == nullptr)
    {
        return 0;
    }

    int leftsum = countSum(root->left);
    int rightsum = countSum(root->right);

    int s=leftsum+rightsum+root->data;
    return s;
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

    cout<<"sum is" <<countSum(root);
    return 0;
}