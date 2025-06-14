#include <iostream>
#include<string>
#include<stack>

using namespace std;

string reverse(string str)
{
    string ans;
    stack<char> s;

    for(int i=0;i<str.size();i++)
    {
        s.push(str[i]);
    }

    while(!s.empty())
    {
        char top=s.top();
        ans+=top;
        s.pop();
    }

    return ans;
}

int main()
{
    string str="abcd";
    cout<<"reverse:"<<reverse(str);
    return 0;
}