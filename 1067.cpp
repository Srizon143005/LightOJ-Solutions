#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const long long int m=1000003;

ll fact[1000003];

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
    ll t, n, k, i, temp, ans;
    fact[0]=1;
    for(i=1; i<1000003; i++)
        fact[i]=(fact[i-1]*i)%m;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld %lld", &n, &k);
        temp=(fact[k]*fact[n-k])%m;
        ans=((fact[n]%m)*(power(temp, m-2, m)%m))%m;
        printf("Case %lld: %lld\n", i, ans);
    }
    return 0;
}
