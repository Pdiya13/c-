// for a positive N , WAP that prints the first N Fibonacci numbers

#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;

    int n1=0;
    int n2=1;
    cout<<n1<<endl<<n2<<endl;
    for(int i=1;i<n-1;i++)
    {
        int temp=n1;
        n1=n2;
        n2=n2+temp;
        cout<<n2<<endl;
    }
    return 0;
}