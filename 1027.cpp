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
    ll t, n, i, j, plus, total, a, g;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        plus=0;
        total=0;
        for(j=0; j<n; j++)
        {
            cin >> a;
            total=total+abs(a);
            plus+=(a>0);
        }
        printf("Case %lld: ", i);
        if(plus==0)
            printf("inf\n");
        else
        {
            g=gcd(total, plus);
            plus=plus/g;
            total=total/g;
            printf("%lld/%lld\n", total, plus);
        }
    }
    return 0;
}
