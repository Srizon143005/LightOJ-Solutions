#include <iostream>
#include <cstring>
#include <cstdio>
#include <math.h>
using namespace std;
const int maxn=10010;

int num[maxn],ans[maxn],m,n,T,t;
int pri[30]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};

void initial()
{
    memset(num,0,sizeof(num));
    memset(ans,0,sizeof(ans));
    ans[0]=m=1;
}

void mul(int num)
{
    int tmp=0,now;
    for(int i=0;i<m;i++)  ans[i]*=num;
    for(int i=0;i<m;i++)
    {
         now=ans[i]+tmp;
         tmp=now/10;
         ans[i]=now%10;
    }
    while(tmp)
    {
        ans[m]=tmp%10;
        tmp/=10;
        m++;
    }
}

int main()
{
    scanf("%d",&T);
    for(int co=1;co<=T;co++)
    {
        initial();
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
             scanf("%d",&t);
             int w=t,cnt=0;
             for(int j=0;pri[j]*pri[j]<=t && j<25;j++)
             {
                   while(w%pri[j]==0)
                   {
                       cnt++;
                       w=w/pri[j];
                   }
                   if(cnt)
                   {
                       num[pri[j]]=max(cnt, num[pri[j]]);
                       cnt=0;
                   }
             }
             if(w>1)  num[w]=max(num[w],1);
        }
        for(int i=2;i<maxn;i++)
        {
            if(num[i]==0)  continue;
            int pt=(int)pow(i,num[i]);
            mul(pt);
        }
        printf("Case %d: ",co);
        for(int i=m-1;i>=0;i--)  printf("%d",ans[i]);
        printf("\n");
    }
    return 0;
}
