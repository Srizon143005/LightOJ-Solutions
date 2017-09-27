#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool is_ok(vector <ll> a, ll b)
{
    ll i;
    for(i=a.size()-1; i>=0; i--)
    {
        ll cnt=(a[i]%b)*10;
        if(cnt!=0 && i==0)
            return false;
        if(i!=0)
            a[i-1]=a[i-1]+cnt;
    }
    return true;
}

int main()
{
    ll t, i, b, j;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        string aa;
        vector <ll> a;
        cin >> aa;
        cin >> b;
        for(j=aa.size()-1; j>=0; j--)
        {
            if(aa[j]!='-')
                a.push_back(aa[j]-'0');
        }
        printf("Case %lld: ", i);
        if(is_ok(a, b))
            printf("divisible\n");
        else
            printf("not divisible\n");
    }
    return 0;
}
