#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    map <int,string> m;
    m[101] = "Diya";
    m[110] = "Meet";
    m[131] = "Diya";
    
    cout<<m[101]<<endl;    // return the value present at key 101 
    cout<< m.count(101)<< " "<<m.count(100) << endl;  // return 1 if key is exists else return 0 

    for(auto it : m)
    {
        cout << it.first <<" "<<it.second<<endl;
    }

    return 0;
}