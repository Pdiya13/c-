#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array:";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[i])
            {
                swap(arr[j],arr[i]);
            }
        }
    }

    // for(int i=1;i<n;i++)
    // {
    //     int current=arr[i];
    //     int prev=i-1;

    //     while(prev>=0 && arr[prev]>current)
    //     {
    //     swap(arr[prev],arr[prev+1]);
    //     prev--;
    //     }
    //     arr[prev+1]=current;
    // }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}