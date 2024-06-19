#include <iostream>

using namespace std;

int pair(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }

    return pair(n-1)+(n-1)*(n-2);
}

int main()
{
    int n=3;
    cout << pair(n) << endl; 
    return 0;
}