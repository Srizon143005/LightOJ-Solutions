#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll n, m, a[1005];

bool test(ll x)
{
    ll sum, c, i;
    sum=0;
    c=1;
    for(i=0; i<n; i++)
    {
        sum=sum+a[i];
        if(sum>x)
        {
            sum=a[i];
            c++;
        }
    }
    return c>m;
}

ll Bsearch(ll l, ll r)
{
    ll mid;
    while(r>l)
    {
        mid=(r+l)/2;
        if(test(mid))
            l=mid+1;
        else
            r=mid;
    }
    return r;
}

int main()
{
    ll t, ii, i, l, r, res;
    cin >> t;
    for(ii=1; ii<=t; ii++)
    {
        cin >> n >> m;
        l=0;
        r=0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]>l)
                l=a[i];
            r=r+a[i];
        }
        res=Bsearch(l, r);
        printf("Case %lld: %lld\n", ii, res);
    }
    return 0;
}
