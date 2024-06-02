// WAP to print the multiplication table of a number, entered by the user.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<"n * i = "<<n*i<<endl;
    }
    return 0;
}