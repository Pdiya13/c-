#include <iostream>

using namespace std;

void d_to_b(int n)
{
    int pow=1;
    int ans=0;
    int rem;
    while(n!=0)
    {
        rem=n%2;
        ans+=rem*pow;
        pow=pow*10;
        n=n/2;
    }
    cout<<ans<<endl;
}

int main()
{
    int n;
    cout<<"enter number:"<<endl;
    cin>>n;

    d_to_b(n);
    return 0;
}