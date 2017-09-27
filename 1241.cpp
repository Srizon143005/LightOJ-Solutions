#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, n, j, ans;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        ll a[n+3];
        for(j=1; j<=n; j++)
            cin >> a[j];
        a[0]=2;
        ans=0;
        for(j=0; j<n; j++)
        {
            if(a[j+1]>a[j])
                ans=ans+(a[j+1]-a[j]-1)/5+1;
        }
        printf("Case %lld: %lld\n", i, ans);
    }
    return 0;
}
