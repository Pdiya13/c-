#include <iostream>

using namespace std;

class overflow{};
class underflow{};

class stack
{
    int *ptr;
    int top;
    int size;

    public:

    stack()
    {
        top=-1;
        size=0;
    }

    stack(int size)
    {
        ptr=new int[size];
        this->size=size;
        top=-1;
    }

    void push(int n)
    {
        if(top==size-1)
        {
            throw overflow();
        }
        ptr[++top]=n;
    }

    int pop()
    {
        if(top==-1)
        {
            throw underflow();
        }
        return ptr[top--];
    }

    

    ~stack()
    {
        delete []ptr;
    }

};

int main()
{
    stack s(3);
    try{
        s.push(10);
        s.push(9);
        cout<<s.pop()<<endl;
        s.push(8);
        s.push(8);
        s.push(8);
        s.push(7);
        cout<<s.pop()<<endl;
    }
    catch(overflow o)
    {
        cout<<"over "<<endl;
    }
    catch(underflow o)
    {
        cout<<"under "<<endl;
    }
    return 0;
}