#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, n, i, j, k, m;
    double sum;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        double a[n];
        for(j=0; j<n; j++)
            cin >> a[j];
        for(j=n-2; j>=0; j--)
        {
            sum=0;
            m=0;
            for(k=j+1; k<n && m<6; k++, m++)
                sum=sum+a[k];
            a[j]=a[j]+sum/m;
        }
        printf("Case %lld: %.7lf\n", i, a[0]);
    }
    return 0;
}
