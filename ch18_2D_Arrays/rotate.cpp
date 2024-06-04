#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter value of row(row = column):";
    cin>>n;
    cout<<"enter array elements:"<<endl;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int brr[n][n];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int x=(n-1)-i;
            brr[j][x]=arr[i][j];
        }
    }

    cout<<"array after rotating is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            arr[i][j]=brr[i][j];
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}