#include <iostream>

using namespace std;

void sum(int n1,int n2)
{
    int rem1,rem2;
    int pow=1;
    int ans=0;
    int c;
    while(n1>0 || n2>0)
    {
        rem1=n1%10;
        rem2=n2%10;
        if(n1==n2)
        {
            if(n1==0)
            {
                ans+=0*pow;
                pow=pow*10;
                c=0;
            }
            else
            {
                ans+=1*pow;
                pow=pow*10;
                c=1;
            }
        }
        else
        {
            ans+=1*pow;
            pow=pow*10;
            c=0;
        }
    }
    cout<<ans<<endl;
}

int main()
{
    int n1,n2;
    cout<<"enter two binary number:"<<endl;
    cin>>n1>>n2;

    sum(n1,n2);
    return 0;
}