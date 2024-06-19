#include <iostream>

using namespace std;

int tp(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    
        int ans1=tp(n-1);

        int ans2=tp(n-2);
    
    return ans1+ans2;
}

int main()
{
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    
    cout<<tp(n)<<endl;
    return 0;
}