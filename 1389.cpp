#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, ii, i, n, c;
    char a[200];
    cin >> t;
    for(ii=1; ii<=t; ii++)
    {
        cin >> n;
        cin >> a;
        c=0;
        i=0;
        while(i<n)
        {
            if(a[i]=='#')
                i++;
            else
            {
                c++;
                i=i+3;
            }
        }
        printf("Case %lld: %lld\n", ii, c);
    }
    return 0;
}
