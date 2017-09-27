#include <bits/stdc++.h>
#define ll long long int
#define gamma 0.57721566490153286060651209008240243104215933593992
using namespace std;
double sum[1000010];

int main()
{
    ll i, t, n;
    sum[0]=0;
    for(i=1; i<1000010; i++)
        sum[i]=sum[i-1]+1.0/i;
    scanf("%lld", &t);
    for(i=1; i<=t; i++)
    {
        scanf("%lld", &n);
        printf("Case %lld: ", i);
        if(n<1000010)
            printf("%.8lf\n", sum[n]);
        else
            printf("%.8lf\n", (log(n)+log(n+1))/2+gamma);
    }
    return 0;
}
