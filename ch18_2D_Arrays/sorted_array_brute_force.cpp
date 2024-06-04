//sorted matrix is when your array is sorted row wise as well as collum wise 
//must need to enter sorted matrix to get correct result
// time complexity is maximum o(m*n)

#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"enter value of row and column:";
    cin>>m>>n;

    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }

    int x;
    cout<<"enter the element you want to search:"<<endl;
    cin>>x;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(x==arr[i][j])
            {
                cout<<"element found on "<<i+1<<"th row and "<<j+1<<"th column "<<endl;
                break;
            }
            else{
                continue;
            }
        }
    }
    return 0;
}