#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll fac(ll n)
{
    if(n==1 || n==0)
        return 1;
    return n*fac(n-1);
}

ll f[20];

int main()
{
    ll t, i, n, cnt, tag;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        stack <ll> s;
        while(!s.empty())
            s.pop();
        cnt=20;
        tag=0;
        while(n)
        {
            if(cnt<0)
            {
                tag=1;
                break;
            }
            if(n>=fac(cnt))
            {
                n=n-fac(cnt);
                s.push(cnt);
            }
            cnt--;
        }
        printf("Case %lld: ", i);
        if(tag)
            printf("impossible\n");
        else
        {
            while(s.size()!=1)
            {
                printf("%lld!+", s.top());
                s.pop();
            }
            printf("%lld!\n", s.top());
        }
    }
    return 0;
}
