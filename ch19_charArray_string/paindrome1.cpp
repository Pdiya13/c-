#include <iostream>
#include<string.h>

using namespace std;

bool pal(string str,int n)
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
    string str;
    cout << "Enter a string: ";
    getline(cin,str); //use this
    // cin>>str; not this because its removes white spaces
    int len = str.size();

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