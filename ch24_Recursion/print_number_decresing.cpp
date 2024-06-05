#include <iostream>

using namespace std;

int print(int n)
{
    if(n==0)
    {
        return 0;
    }
    
    cout<<n<<" ";
    return print(n-1);
    
}

//incresing order

// int print(int n)
// {
//     if(n==0)
//     {
//         return 0;
//     }
//         print(n-1);
//         cout<<n<<" ";
// }

int main()
{
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;

    print(n);
    return 0;
}