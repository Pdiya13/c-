#include <iostream>

using namespace std;

// int Pow(int x,int n)
// {
//     if(n==0)
//     {
//         return 1;
//     }

//     return x*Pow(x,n-1);
// }


//time complexity is less o(logn)
int Pow(int x,int n)
{
    if(n==0)
    {
        return 1;
    }
    int half_power=Pow(x,n/2);
    int half_power_square=half_power * half_power;

    if(n%2==1)
    {
        return x*half_power_square;
    }
    return half_power_square;
}

int main()
{
    int x,n;
    cout<<"enter x and n:";
    cin>>x>>n;

    int a=Pow(x,n);
    cout<<x<< " to the power "<<n<<" is:"<<a;
    return 0;
}