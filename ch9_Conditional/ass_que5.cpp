#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=n;
    int rem=1;
    int ans=0;
    int c=0;
    while(m!=0)
    {
        m=m/10;
        c++;
    }
    m=n;
    while(n!=0)
    {
        rem=1;
        for(int i=0;i<c;i++)
        {
            rem=rem*(n%10);
        }
        n=n/10;
        ans+=rem;
    }
    
    if(m==ans)
    {
        cout<<ans<<endl;
    }
    else
    {
        cout<<"not armstrong"<<endl;
    }
    return 0;
}