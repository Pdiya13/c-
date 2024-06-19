#include <iostream>
#include<stack>

using namespace std;

void pushAtbottom(stack <int> &s,int temp)
{
    if(s.empty())
    {
        s.push(temp);
        return;
    }
    int x=s.top();
    s.pop();
    pushAtbottom(s,temp);
    s.push(x);
}

void reverse(stack <int> &s)
{
    if(s.empty())
    {
        return;
    }
    int temp=s.top();
    s.pop();
    reverse(s);

    pushAtbottom(s,temp);
}

void printstack(stack <int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int main()
{
    stack <int> s;
    s.push(4);
    s.push(3);
    s.push(2);
    s.push(1);
    printstack(s);
    reverse(s);

    printstack(s);
    return 0;
}