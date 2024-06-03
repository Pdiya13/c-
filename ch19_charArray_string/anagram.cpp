#include <iostream>

using namespace std;
bool anagram(string str1,int n1,string str2, int n2)
{
    if(n1!=n2)
    {
        return 0;
    }
    else
    {
        int arr[26]={0};
        for(int i=0;i<n1;i++)
        {
            arr[str1[i]-'a']++;
        }
        for(int i=0;i<n2;i++)
        {
            if(arr[str2[i]-'a']==0)
            {
                return 0;
            }
            arr[str2[i]-'a']--;
        }
    }
    return 1;
}

int main()
{
    string str1,str2;
    cout<<"enter 1st string:"<<endl;
    getline(cin,str1);
    cout<<"enter 2nd string:"<<endl;
    getline(cin,str2);

    int x=anagram(str1,str1.length(),str2,str2.length());
    if(x==0)
    {
        cout<<"Not anagram"<<endl;
    }
    else
    {
        cout<<"anagram"<<endl;
    }
    return 0;
}