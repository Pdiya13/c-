#include <iostream>
#include<string.h>

using namespace std;

void toUpper(char str[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            continue;
        }
        else{
            str[i]=str[i]-'A'+'a';
        }
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

    toUpper(str,strlen(str));
    cout<<"you updated string is: "<<str<<endl;
    return 0;

    
}