#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, a[40], i, n, p, q, j, ans, c;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n >> p >> q;
        for(j=1; j<=n; j++)
            cin >> a[j];
        sort(a+1, a+n+1);
        ans=0;
        c=1;
        q=q-a[c];
        while(q>=0)
        {
            ans++;
            if(c==n)
                break;
            c++;
            q=q-a[c];
            if(ans>=p)
                break;
        }
        printf("Case %lld: %lld\n", i, ans);
    }
    return 0;
}
