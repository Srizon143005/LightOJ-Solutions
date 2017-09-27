#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll zero(ll n)
{
    ll c=0;
    while(n)
    {
        c=c+n/5;
        n=n/5;
    }
    return c;
}

int main()
{
    ll t, i, n, start, end, mid;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld", &n);
        start=4;
        end=400000000;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(zero(mid)>=n)
                end=mid-1;
            else
                start=mid+1;
        }
        if(zero(start)!=n)
            printf("Case %lld: impossible\n", i);
        else
            printf("Case %lld: %lld\n", i, start);
    }
    return 0;
}
