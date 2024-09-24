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

bool isIdentical (Node* root , Node* root2)
{
    if(root == nullptr && root2 == nullptr)
    {
        return true;
    }
    if(root == nullptr || root2 == nullptr)    
    {
        return false;
    }

    if(root->data != root2->data)
    {
        return false;
    }
    
    return isIdentical(root->left,root2->left) && isIdentical(root->right,root2->right) ;

}

bool isSubtree(Node* root, Node* root2)
{
    if(root == nullptr && root2 == nullptr)      // check if root and root2 both null then true
    {
        return true;
    }
    if(root == nullptr || root2 == nullptr )    // if any of root will be null then return false
    {
        return false;
    }

    if(root->data == root2->data)
    {
        // find identical condition 
        int x = isIdentical(root,root2);
        if(x == 1)
        {
            return true;
        }
    }

    int left = isSubtree(root->left,root2);

    if(!left)
    {
        return isSubtree(root->right,root2);
    }

    return true;
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

    Node* subroot = new Node(2);
    subroot->left = new Node(4);
    subroot->right = new Node(5);

    int x = isSubtree(root,subroot);
    if(x == 1)
    {
        cout<<"subtree exists!!"<<endl;
    }
    else
    {
        cout<<"NOT"<<endl;
    }
    
    cout<<endl;
    return 0;

}