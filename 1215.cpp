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
    ll t, a, b, l, i, m, c, d;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld %lld", &a, &b, &l);
        m=a*b/gcd(a, b);
        printf("Case %lld: ", i);
        if(l%m!=0)
            printf("impossible\n");
        else
        {
            c=l/m;
            d=gcd(c, m);
            while(d!=1)
            {
                c=c*d;
                m=m/d;
                d=gcd(c, m);
            }
            printf("%lld\n", c);
        }
    }
    return 0;
}

