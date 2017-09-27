#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll power(ll b, ll p, ll m)
{
    ll d;
    if(p==0)
        return 1;
    d=power(b, p/2, m);
    if(p%2==0)
        return (d*d)%m;
    else
        return (b%m*(d*d)%m)%m;
}

int main()
{
    ll t, n, k, m, i, j, ans, x;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n >> k >> m;
        ans=0;
        for(j=0; j<n; j++)
        {
            cin >> x;
            ans=(ans+x)%m;
        }
        ans=((ans*power(n, k-1, m))%m*(k%m))%m;
        printf("Case %lld: %lld\n", i, ans);
    }
    return 0;
}
