#include <iostream>

using namespace std;

int search(int arr[],int n,int key)
{
    if(n<0 || arr[n]==key)
    {
        return n;
    }

    search(arr,n-1,key);
}

int main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int key;
    cout<<"enter key:"<<endl;
    cin>>key;
    int idx=search(arr,7,key);
    cout<<"idx of key is :"<<idx<<endl;
    return 0;
}