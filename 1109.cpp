#include <bits/stdc++.h>
#define ll long long int
using namespace std;

struct S
{
    ll a, b;
}s[1001];

ll prime[1001];

ll Prime()
{
    ll i, j;
    memset(prime, 1, sizeof(prime));
    prime[0]=prime[1]=0;
    for(i=2; i*i<=1001; i++)
    {
        if(prime[i])
        {
            for(j=2*i; j<1001; j=j+i)
                prime[j]=0;
        }
    }
}

ll tmp[1001];

bool cmp(S x, S y)
{
    if(x.a<y.a)
        return true;
    if(x.a==y.a)
        return x.b>y.b;
    return false;
}

int main()
{
    ll i, j, t, n, cnt, ii;
    Prime();
    for(i=1; i<=1001; i++)
        tmp[i]=1;
    for(i=1; i<=1001; i++)
    {
        for(j=2; j<=i; j++)
        {
            if(prime[j] && i%j==0)
            {
                cnt=1;
                ii=i;
                while(ii%j==0)
                {
                    ii=ii/j;
                    cnt++;
                }
                tmp[i]=tmp[i]*cnt;
            }
        }
    }
    for(i=1; i<1001; i++)
    {
        s[i].a=tmp[i];
        s[i].b=i;
    }
    sort(s+1, s+1001, cmp);
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        printf("Case %lld: %lld\n", i, s[n].b);
    }
    return 0;
}
