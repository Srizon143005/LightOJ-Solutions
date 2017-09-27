#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool is_prime[10000000];
ll prime[700000], n_prime=0;

ll Prime()
{
    ll i, j;
    is_prime[0]=is_prime[1]=true;
    for(i=2; i<10000000; i++)
    {
        if(!is_prime[i])
        {
            prime[n_prime++]=i;
            for(j=i*2; j<10000000; j=j+i)
                is_prime[j]=true;
        }
    }
}

int main()
{
    Prime();
    ll t, n, i, j, ans;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        ans=0;
        for(j=0; prime[j]<=n/2; j++)
        {
            if(!is_prime[n-prime[j]])
                ans++;
        }
        printf("Case %lld: %lld\n", i, ans);
    }
    return 0;
}
