#include <bits/stdc++.h>
using namespace std;

const int N=1e8+5;
const int num=5761460;
bitset <N> noprime;
int p[num], len;
unsigned int mul[num];

int Bitwise_Prime()
{
    noprime.reset();
    for(int i=2; i*i<=N; i++)
    {
        if(!noprime[i])
        {
            for(int j=i*i; j<=N; j=j+i)
                noprime[j]=1;
        }
    }
    int k=0;
    for(int i=2; i<=N; i++)
    {
        if(!noprime[i])
            p[k++]=i;
    }
    //cout << "Done" << endl;
    return k;
}

void init_lcm()
{
    len=Bitwise_Prime();
    mul[0]=p[0];
    for(int i=1; i<len; i++)
        mul[i]=mul[i-1]*p[i];
}

void solve(int n)
{
    int pos=lower_bound(p, p+len, n)-p;
    if(p[pos]!=n)
        pos--;
    unsigned int ans=mul[pos];
    for(int i=0; p[i]*p[i]<=n; i++)
    {
        int tmp=p[i];
        int tmp2=p[i]*p[i];
        while(tmp2/tmp==p[i] && tmp2<=n)
        {
            tmp=tmp*p[i];
            tmp2=tmp2*p[i];
        }
        ans=ans*(tmp/p[i]);
    }
    cout << ans << endl;
}

int main()
{
    int t, i, n;
    init_lcm();
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cin >> n;
        printf("Case %d: ", i);
        solve(n);
    }
    return 0;
}
