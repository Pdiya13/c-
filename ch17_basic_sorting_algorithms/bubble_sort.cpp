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

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            bool isswap=false;
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;  
                isswap=true; 
            }
            if(isswap==false)
            {
                cout<<"array is already sorted !!!"<<endl;
                i=-1;
                break;
            }
        }
        if(i==-1)
        {
            break;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}