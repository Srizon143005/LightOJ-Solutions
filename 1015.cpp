#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, n, ans, a, j;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        ans=0;
        for(j=1; j<=n; j++)
        {
            cin >> a;
            if(a>0)
                ans=ans+a;
        }
        printf("Case %lld: %lld\n", i, ans);
    }
    return 0;
}
