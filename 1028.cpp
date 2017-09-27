#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long int

ll prime[1000010], n_prime=0, num[1000010];

ll Prime()
{
	ll i, j;
	for(i=0; i<1000010; i++)
		prime[i]=1;
	prime[0]=prime[1]=0;
	for(i=2; i<1000010; i++)
	{
		if(prime[i])
		{
			num[++n_prime]=i;
			for(j=2*i; j<1000010; j=j+i)
				prime[j]=0;
		}
	}
}

int main()
{
	Prime();
	ll t, n, i, j, ans;
	scanf("%lld", &t);
	for(i=1; i<=t; i++)
	{
		ans=1;
		scanf("%lld", &n);
		for(j=1; j<n_prime && num[j]<=sqrt(n); j++)
		{
			if(n<num[j])
				break;
			if(n%num[j]==0)
			{
				ll cnt=1;
				while(n%num[j]==0)
				{
					n=n/num[j];
					cnt++;
				}
				ans=ans*cnt;
			}
		}
		if(n>1)
			ans=ans*2;
		ans--;
		printf("Case %lld: %lld\n", i, ans);
	}
	return 0;
}
