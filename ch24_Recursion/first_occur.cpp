#include <iostream>
#include <vector>

using namespace std;

int first_occur(vector<int> arr,int i,int key)
{
    if(i==arr.size())
    {
        return -1;
    }
    
    if(arr[i]==key)
    {
        return i;
    }
        
    return first_occur(arr,i+1,key);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin>>n;

    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int a;
    cout<<"enter number you want to search:";
    cin>>a;
    
    cout<<first_occur(arr,0,a);

   
    return 0;
}