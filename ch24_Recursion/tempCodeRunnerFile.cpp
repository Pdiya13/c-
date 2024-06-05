#include <iostream>
#include <vector>

using namespace std;

int last_occur(vector<int> arr,int n,int key)
{
    if(n==0)
    {
        return 0;
    }
    
    if(arr[n]==key)
    {
        cout<<"key is found on index:"<<n<<endl;
        return 1;
    }
        
    n--;
    last_occur(arr,n,key);
    
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
    int x=last_occur(arr,n,a);
    if(x==0)
    {
        cout<<"key is not found"<<endl;
    }

   
    return 0;
}