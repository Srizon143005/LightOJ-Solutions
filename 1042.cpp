#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n;
string s;

void solve()
{
    ll i, j, ones, ans, curr;
    while(n)
    {
        s+=((n%2)+'0');
        n=n/2;
    }
    //cout<<s<<'\n';
    s=s+'0';
    ones=0;
    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
            ones++;
        if(s[i]=='1' && s[i+1]=='0')
        {
            ones--;
            swap(s[i], s[i+1]);
            for(j=0; j<i && ones; j++)
            {
                ones--;
                s[j]='1';
            }
            break;
        }
        else
            s[i]='0';
    }
    ans=0;
    curr=1;
    for(i=0; i<s.size(); i++)
    {
        ans=ans+curr*(s[i]-'0');
        curr=curr*2;
    }
    printf("%lld\n", ans);
}

int main()
{
    ll i, t;
    scanf("%lld", &t);
    for(i=1;i<=t;i++)
    {
        s.clear();
        cin >> n;
        printf("Case %lld: ", i);
        solve();
    }
    return 0;
}
