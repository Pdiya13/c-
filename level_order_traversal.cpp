// level order traversal iterative 
#include<iostream>
#include <vector>
#include<queue>

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

void leveltraversal(Node* root)
{
    if(root == nullptr)
    {
        return;
    }
    queue <Node*> q;
    q.push(root);
    q.push(nullptr);
    int s=0;

    while(!q.empty())
    {
        Node* curr = q.front();
        q.pop();

        if(curr == nullptr)
        {
             cout<<endl;
             cout<<"s is:"<<s<<endl;
             s=0;
            if(q.empty())
            {
                break;
            } 
            q.push(nullptr);
        }
        else
        {
            
            cout << curr->data<<" ";
            s=s+curr->data;

                if(curr->left != nullptr)
                {
                    q.push(curr->left);
                }
                if(curr->right != nullptr)
                {
                    q.push(curr->right);
                }

        }
        
       
    }

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

    leveltraversal(root);
    return 0;
}