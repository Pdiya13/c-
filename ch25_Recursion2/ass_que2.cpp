#include <iostream>

using namespace std;

int find(int arr[],int n,int key)
{
    if(n<0)
    {
        return -1;
    }

    if(arr[n]==key)
    {
        cout<<n<<" ";
    }

    find(arr,n-1,key);
}

int main()
{
    int n;
    cout<<"enter the length of array:"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cout<<"enter key value"<<endl;
    cin>>key;

    find(arr,n,key);
    return 0;
}