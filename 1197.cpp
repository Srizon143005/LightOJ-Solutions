#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool a[1000006], tt[1000006];
ll prime[100000], cnt=0;

ll init()
{
    ll i, j;
    for(i=2; i*i<=1000005; i++)
    {
        if(!a[i])
        {
            for(j=i*i; j<=1000005; j=j+i)
                a[j]=1;
        }
    }
    for(i=2; i<=1000005; i++)
    {
        if(!a[i])
            prime[cnt++]=i;
    }
}

int main()
{
    init();
    ll t, a, b, i, j, k, ans, st;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> a >> b;
        for(j=0; j<=1000005; j++)
            tt[j]=0;
        for(j=0; j<cnt && prime[j]*prime[j]<=b; j++)
        {
            st=max(a/prime[j]*prime[j], prime[j]*prime[j]);
            for(k=st; k<=b; k=k+prime[j])
            {
                if(k>=a)
                    tt[k-a]=1;
            }
        }
        ans=0;
        for(j=0; j<=b-a; j++)
        {
            if(!tt[j])
                ans++;
        }
        if(a==1)
            ans--;
        printf("Case %lld: %lld\n", i, ans);
    }
    return 0;
}
