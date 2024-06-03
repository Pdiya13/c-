//by reversing string

#include <iostream>
#include<string.h>

using namespace std;

void reverse(char str[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        char temp=str[s];
        str[s]=str[e];
        str[e]=temp;
        s++;
        e--;
    } 
}
int main()
{
    char str[50];
    cout<<"enter your string:";
    cin>>str;
    cout<<"size of your string is:"<<strlen(str)<<endl; 
    
    char str1[50];
    strcpy(str1,str);
    reverse(str,strlen(str));
    cout<<"string after reversing:"<<str<<endl;
    
    if(strcmp(str,str1))
    {
        cout<<"Not palindrome";
    }
    else{
        cout<<"palindrome";
    }
    return 0;
}
    