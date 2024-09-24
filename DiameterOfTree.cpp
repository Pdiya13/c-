#include<iostream>
#include<vector>

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

int height(Node* root)
{
    if(root == nullptr)
    {
        return 0;
    }

    int leftht = height(root->left);
    int rightht = height(root->right);

    int m = max(leftht,rightht);

    return m+1;
}

int diam1(Node* root)
{
    if(root == nullptr)
    {
        return 0;
    }

    int currdiam = height(root->left) + height(root->right) + 1 ;
    int leftdiam = diam1(root->left);
    int rightdiam = diam1(root->right);

    return max(currdiam, max(leftdiam,rightdiam)) ;
}

pair <int , int> diam2 (Node* root) // first->diameter , second->height
{
    if(root == nullptr)
    {
        return make_pair(0,0);
    }

    pair <int,int> left = diam2(root->left); // left diameter , left height
    pair <int,int> right = diam2(root->right);

    int currdiam = left.second + right.second + 1;
    int finaldiam = max(currdiam, max(left.first,right.first));

    int finalheight = max(left.second , right.second) + 1;

    return make_pair(finaldiam,finalheight);

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
    // nodes.push_back(7);
    // nodes.push_back(-1);
    nodes.push_back(-1);
    nodes.push_back(-1);

    Node* root = build_tree(nodes);

    cout<<"root is:"<<root->data<<endl;

    cout<<"diameter is:" <<diam2(root).first;
    
    cout<<endl;
    return 0;
}