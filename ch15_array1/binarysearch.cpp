#include <iostream>

using namespace std;

void sort(int *ptr,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ptr[i]>ptr[j])
            {
                int temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}
int search(int* ptr,int n,int x)
{
    int s=0,e=n-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        mid=(s+e)/2;
        if(ptr[mid]==x)
        {
            return mid;
        }
        else if(ptr[mid]<x)
        {
            s=mid+1;
        }
        else if(ptr[mid]>x)
        {
            e=mid-1;
        }
    }
    
    return -1;
}
int main()
{
    int n;
    cout<<"enter size of an array:"<<endl;
    cin >> n;

    cout<<"enter array elements:";
    
    int *ptr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>(ptr[i]);
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<(ptr[i])<<endl;
    // }
    sort(ptr,n);
    int z;
    cout<<"enter a number you want to search:"<<endl;
    cin>>z;

    int i=search(ptr,n,z);
    if(i==-1)
    {
        cout<<"not found"<<endl;
    }
    else{
    cout<<"number "<<ptr[i]<<" is present on position:"<<i<<endl;
    }
    return 0;
}