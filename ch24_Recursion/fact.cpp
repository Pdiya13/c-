#include <iostream>

using namespace std;

int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;

    int f=fact(n);
    cout<<f<<endl;
    return 0;
}