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

    bool isset=false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isset=true;
            }
        }
        if(!isset){
            cout<<"already sorted !!!";
            break;
        }  
    }


    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}