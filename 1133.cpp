#include <bits/stdc++.h>
#define ll long long int
using namespace std;

char str[10];

int main()
{
    ll t, i, n, m, a[110], ii, x, y, num;
    cin >> t;
    for(ii=1; ii<=t; ii++)
    {
        cin >> n >> m;
        for(i=1; i<=n; i++)
            cin >> a[i];
        while(m--)
        {
            scanf(" %s", str);
            if(str[0]=='P')
            {
                cin >> x >> y;
                x++;
                y++;
                swap(a[x], a[y]);
            }
            else if(str[0]=='R')
            {
                for(i=1; i<=n/2; i++)
                    swap(a[i], a[n+1-i]);
            }
            else if(str[0]=='S')
            {
                cin >> num;
                for(i=1; i<=n; i++)
                    a[i]=a[i]+num;
            }
            else if(str[0]=='M')
            {
                cin >> num;
                for(i=1; i<=n; i++)
                    a[i]=a[i]*num;
            }
            else
            {
                cin >> num;
                for(i=1; i<=n; i++)
                    a[i]=a[i]/num;
            }
        }
        printf("Case %lld:\n", ii);
        for(i=1; i<n; i++)
            printf("%lld ", a[i]);
        printf("%lld\n", a[n]);
    }
    return 0;
}
