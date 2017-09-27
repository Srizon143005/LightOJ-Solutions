#include<stdio.h>
int main()
{
    int nCase,tCase;
    scanf("%d",&nCase);
    for(tCase=1; tCase<=nCase; tCase++)
    {
        long long int f[10005],n,i;
        for(i=0; i<6; i++)
        {
            scanf("%lld",&f[i]);
        }
        scanf("%d",&n);
        for(i=6; i<=n; i++)
        {
            f[i]=(f[i-1]+f[i-2]+f[i-3]+f[i-4]+f[i-5]+f[i-6])%10000007;
        }
        printf("Case %d: %lld\n",tCase,f[n]% 10000007);
    }
    return 0;
}
