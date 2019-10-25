#include<bits/stdc++.h>
typedef unsigned long long int ull;
typedef long long int ll;
using namespace std;
int main()
{
    ll t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int min,x;
        cin>>min;
        for(int i=1;i<n;i++)
        {
            cin>>x;
            if(x<min)
            x=min;
        }
        cout<<min<<endl;
    }
    return 0;
}
