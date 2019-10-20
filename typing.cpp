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
        string s[n];
        double t[n];
        double tot=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            flag=0;
            for(int j=i-1;j>=0;j--)
            {
                if(s[i].compare(s[j])==0)
                {
                    t[i]=t[j];
                    flag=1;
                }
            }
            if(flag==0)
            {
                t[i]=0.2;
                for(int j=1;j<s[i].length();j++)
                {
                    if((s[i][j]=='d'&&s[i][j-1]=='f')||(s[i][j-1]=='d'&&s[i][j]=='f')||(s[i][j]=='j'&&s[i][j-1]=='k')||(s[i][j-1]=='j'&&s[i][j]=='k'))
                    t[i]+=0.4;
                    else if(s[i][j]==s[i][j-1])
                    t[i]+=0.4;
                    else
                    t[i]+=0.2;
                }
                tot+=t[i];
                
            }
            else if(flag==1)
            {
                tot+=t[i]/2;
            }
        
        }
        cout<<tot*10<<endl;
    }
    return 0;
}
