#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll t, n, x, y;

ll solve()
{
    ll cnt;
    cnt=sqrt(n*1.0);
    if(cnt*cnt<n)
        cnt++;
    n=n-(cnt-1)*(cnt-1);
    if(cnt%2!=0)
    {
        if(n>=cnt)
        {
            y=cnt;
            x=n-cnt;
            x=cnt-x;
        }
        else
        {
            x=cnt;
            y=n;
        }
    }
    else
    {
        if(n>=cnt)
        {
            x=cnt;
            y=n-cnt;
            y=cnt-y;
        }
        else
        {
            y=cnt;
            x=n;
        }
    }
}

int main()
{
    ll i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        solve();
        printf("Case %lld: %lld %lld\n", i, x, y);
    }
    return 0;
}
