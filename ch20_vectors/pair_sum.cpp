#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    vector<int> vect1(n);
    for(int i=0;i<vect1.size();i++)
    {
        cin>>vect1[i];
    }
    int s=0;
    int e=vect1.size();
    int cs;
    int sum;
    cout<<"enter sum you want to match:"<<endl;
    cin>>sum;
    
    while(s<e)
    {
        cs=vect1[s]+vect1[e];
        if(cs==sum)
        {
            cout<<"match found at index: "<<s<<","<<e<<endl;
            break;
        }
        else if(cs<sum)
        {
            s++;
        }
        else if(cs>sum)
        {
            e--;
        }
    }
    
    return 0;
}