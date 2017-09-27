#include <bits/stdc++.h>
#define ll long long int
using namespace std;

double a[143005];

double srizon(ll n)
{
    if(a[n])
    {
        ll l, div=2, i;
        double sum=0.0;
        l=sqrt(n);
        for(i=2; i<=l; i++)
        {
            if(n%i==0)
            {
                sum=sum+srizon(n/i);
                div++;
                if(i!=n/i)
                {
                    sum=sum+srizon(i);
                    div++;
                }
            }
        }
        sum=sum/(div-1);
        sum=sum+div*1.0/(div-1);
        a[n]=sum;
    }
    return a[n];
}

int main()
{
    ll t, i, n;
    cin >> t;
    for(i=0; i<143005; i++)
        a[i]=1.0;
    a[0]=a[1]=0.0;
    for(i=0; i<t; i++)
    {
        cin >> n;
        printf("Case %lld: %.7lf\n", i+1, srizon(n));
    }
    return 0;
}
