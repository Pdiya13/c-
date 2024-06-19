#include <iostream>
#include<string>

using namespace std;

void duplicate(string str,string ans,int i,int map[26])
{
    if(i==str.size())
    {
        cout<<"ans :"<<ans<<endl;
        return;
    }
    int map_idx=(int)(str[i]-'a');

    if(map[map_idx])
    {
        duplicate(str,ans,i+1,map);
    }
    else
    {
        map[map_idx]=true;
        duplicate(str,ans+str[i],i+1,map);
    }
}

int main()
{
    string str="apna college";
    string temp="";
    int map[26]= {false};
    duplicate(str,temp,0,map);
    return 0;
}