#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll gcd(ll a, ll b)
{
    if(a%b==0)
        return b;
    return gcd(b, a%b);
}

int main()
{
    ll x1, y1, x2, y2, i, t, a, b, ans;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld %lld", &x1, &y1, &x2, &y2);
        a=abs(x2-x1);
        b=abs(y2-y1);
        if(a==0)
            ans=b+1;
        else if(b==0)
            ans=a+1;
        else
            ans=gcd(a, b)+1;
        printf("Case %lld: %lld\n", i, ans);
    }
    return 0;
}
