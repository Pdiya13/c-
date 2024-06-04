//sorted matrix is when your array is sorted row wise as well as collum wise 
//must need to enter sorted matrix to get correct result
// time complexity is o(m*log(n))

#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"enter m and n:";
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int x;
    cout<<"enter the element you want to search:"<<endl;
    cin>>x;

    for(int i=0;i<m;i++)
    {
        int s=0;
        int e=n-1;
        int m=(s+e)/2;
        while(s<e)
        {
            if(x==a[i][m])
            {
                cout<<"element found at row "<<i+1<<" and column "<<m+1<<endl;
                break;
            }
            else if(x<a[i][m])
            {
                e=m-1;
            }
            else if(x>a[i][m])
            {
                s=m+1;
            }
            s++;
            e--;
        }

        if(s>=e)
        {
            cout<<"element not found in row "<<i+1<<endl;
        }
    }
    return 0;
}