
#include<iostream>
#include<string>
#include<map>
#include<queue>

using namespace std;


class node
{
    public:
    int data;
    node* left;
    node* right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }

};

static int idx=-1;
node* buildtree(vector<int> nodes)
{
    idx++;
    if(nodes[idx] == -1)
    {
        return NULL;
    }

    node* root = new node (nodes[idx]);
    root->left = buildtree(nodes);
    root->right = buildtree(nodes);

    return root;
}

void bottomview(node* root)
{
    queue <pair<node*,int > > q; //(node,HD)
    map<int,int> m; //(HD,node->data)

    q.push(make_pair(root,0));

    while(!q.empty())
    {
        pair <node*,int> curr=q.front();
        q.pop();

        node* currnode =curr.first;
        int currhd = curr.second;
        
        m[currhd] = currnode->data;

        if(currnode->left != NULL)
        {
            pair<node*,int> left = make_pair(currnode->left, currhd-1);
            q.push(left);
        }

        if(currnode->right != NULL)
        {
            pair<node*,int> right = make_pair(currnode->right, currhd+1);
            q.push(right);
        }
    }
    for(auto it : m)
    {
        cout<<it.second<<" ";
    }
    cout<<endl;
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
    
    node* root=buildtree(nodes);

    bottomview(root);

    return 0;
}