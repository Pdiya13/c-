#include <iostream>

using namespace std;

void b_to_d(int n)
{
    int m=n;
    int rem;
    int bn=0,pow=1;

    while(m!=0)
    {
        rem=m%10;
        bn+=rem*pow;
        pow=pow*2;
        m=m/10;
    }
    cout<<bn<<endl;
}

int main()
{
    int n;
    cout<<"enter number in binary:"<<endl;
    cin>>n;

    b_to_d(n);
    return 0;
}