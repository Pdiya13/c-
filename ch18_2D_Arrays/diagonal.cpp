#include <iostream>

using namespace std;

int main()
{
    int m;
    cout<<"enter m:";
    cin>>m;

    int arr[m][m];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int sum=0;

    for(int i=0;i<m;i++)
    {
        sum+=arr[i][i];
        sum+=arr[i][m-i-1];
    }
    if(m%2==1)
    {
        sum-=arr[m/2][m/2];
    }
    cout<<sum;
   
}