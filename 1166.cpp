#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, t, ii, i, j, a[200], c;
    cin >> t;
    for(ii=1; ii<=t; ii++)
    {
        cin >> n;
        for(i=1; i<=n; i++)
            cin >> a[i];
        c=0;
        for(i=1; i<=n; i++)
        {
            if(a[i]!=i)
            {
                for(j=i+1; j<=n; j++)
                {
                    if(a[j]==i)
                    {
                        swap(a[i], a[j]);
                        c++;
                    }
                }
            }
        }
        printf("Case %lld: %lld\n", ii, c);
    }
    return 0;
}
