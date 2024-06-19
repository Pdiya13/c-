#include <iostream>
#include<vector>

using namespace std;

template <typename T>
class Stack
{
    vector <T> vec;

    public:
    void push(T val)
    {
        vec.push_back(val);
    }

    void pop()
    {
        if(isEmpty())
        {
            cout<<"Stack is empty"<<endl;
            return;
        }
        vec.pop_back();
    }

    T top()
    {
        int lastIdx=vec.size()-1;
        return vec[lastIdx];
    }

    bool isEmpty()
    {
        return vec.size()==0;
    }

};

int main()
{
    Stack <char> s1;
    s1.push('c');
    s1.push('b');
    s1.push('a');

    while(!s1.isEmpty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }

    cout<<endl;
    return 0;
}