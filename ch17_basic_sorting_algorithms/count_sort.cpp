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

    int freq[10000]={0};
    int min_v=INT8_MAX,max_v=INT8_MIN;
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;
        min_v=min(min_v,arr[i]);
        max_v=max(max_v,arr[i]);
    }

    for(int i=min_v,j=0;i<=max_v;i++)
    {
        while(freq[i]>0)
        {
            arr[j++]=i;
            freq[i]--;
        }
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}