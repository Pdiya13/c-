//maxSubArray sum by slightly optimized method


#include <iostream>

using namespace std;

int subArr(int arr[],int n)
{
    int max_sum=INT32_MIN;
    for(int s=0;s<n;s++)
    {
        int sum=0;
        for(int e=s;e<n;e++)
        {
            sum+=arr[e];
            max_sum=max(max_sum,sum);
        }  
    }
    return max_sum;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    int z=subArr(arr,n);
    cout<<"max sub array sum is:"<<z;
    return 0;
}