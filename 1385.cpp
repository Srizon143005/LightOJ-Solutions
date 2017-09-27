#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t, i;
    double a, b, c, ans, div;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> a >> b >> c;
        div=(b*b-a*c)/b;
        if(div<=0)
            printf("Case %lld: -1\n", i);
        else
        {
            ans=(a*c)*(b+c+a+b)/div/b;
            printf("Case %lld: %.8lf\n", i, ans);
        }
    }
    return 0;
}
