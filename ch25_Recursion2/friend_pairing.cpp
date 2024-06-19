#include <iostream>
#include<string>

using namespace std;

int f_pair(int n)
{
    if(n==1 || n==2)
    {
        return n;
    }

    return f_pair(n-1)+ (n-1) *f_pair(n-2);
}

int main()
{
    cout << f_pair(4) << endl; 
    return 0;
}