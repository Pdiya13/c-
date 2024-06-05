#include <iostream>

using namespace std;

int is_sort(int arr[], int m)
{
    if(m==1)
    {
        return 1;
    }
    
    if(arr[m-1]>arr[m])
    {
        return 0;
    }

    is_sort(arr,m-1);
}

int main()
{
    int n;
    cout<<"enter size of the array:"<<endl;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x=is_sort(arr,n);
    if(x==0)
    {
        cout<<"array is not sorted"<<endl;
    }
    else if(x==1)
    {
        cout<<"array is sorted"<<endl;
    }
    return 0;
}