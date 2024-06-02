#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"enter m & n:"; 
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"enter number you want to search:"<<endl;
    cin>>key;

    int r=0,c=n-1;
    while(r<m&&c>=0)
    {
        if(arr[r][c]==key)
        {
            cout<<"present"<<r<<" "<<c<<endl;
            break;
        }
        else if(arr[r][c]>key){
            c--;
        }
        else if(arr[r][c]<key)
        {
            r++;
        }
    }
    if(r==m||c<0)
    {
        cout<<"Entered element do not exist in array.";
    }
    return 0;
}