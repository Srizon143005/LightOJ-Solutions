#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i, n, x1, x2, y1, y2, z1, z2, x, y, z, X, Y, Z, j;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        x=0;
        y=0;
        z=0;
        X=1001;
        Y=1001;
        Z=1001;
        cin >> n;
        for(j=1; j<=n; j++)
        {
            cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
            x=max(x, x1);
            y=max(y, y1);
            z=max(z, z1);
            X=min(x2, X);
            Y=min(y2, Y);
            Z=min(z2, Z);
        }
        printf("Case %lld: ", i);
        if(X>x && Y>y && Z>z)
            printf("%lld\n", (X-x)*(Y-y)*(Z-z));
        else
            printf("0\n");
    }
    return 0;
}
