#include <iostream>
#include <vector>

using namespace std;

int last_occur(vector<int> arr,int i,int key)
{
    if(i==arr.size())
    {
        return -1;
    }

    int idxFound=0;
    last_occur(arr,i--,key);
    if(idxFound=-1 && arr[i]==key)
    {
        return i;
    }
    
    return idxFound;
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
    int x=last_occur(arr,n-1,a);
    if(x==-1)
    {
        cout<<"key is not found"<<endl;
    }
    else
    cout<<"found on :"<<x;

   
    return 0;
}