#include <iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

void toLower(char str[],int n)
{
    for(int i=0;i<n;i++)
    {
        str[i]=toupper(str[i]);
    }
}

int main()
{
    int n;
    cout<<"enter length of array:";
    cin>>n;
    cin>>ws;
    char str[n+1];
    cin.getline(str,n+1);
    cout<<"you entered: "<<str<<endl;
    cout<<"size is:"<<strlen(str)<<endl;

    toLower(str,strlen(str));
    cout<<"you updated string is: "<<str<<endl;
    return 0;

    
}