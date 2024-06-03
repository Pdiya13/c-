#include <iostream>
#include<string.h>

using namespace std;

bool pal(char str[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        if(str[s++]!=str[e--])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    char str[50];
    cout << "Enter a string: ";
    cin>>str;
    int len = strlen(str);

    int i=pal(str,len);
    if(i==1)
    {
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }
    return 0;
}