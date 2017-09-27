#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long int

int p[25]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

int main()
{
	ll t, n, i, j, k;
	scanf("%lld", &t);
	for(i=1; i<=t; i++)
	{
		ll num[100]={0};
		scanf("%lld", &n);
		for(j=0; j<25 && n>=p[j]; j++)
		{
			ll cnt=0;
			for(k=p[j]; k<=n; k=k*p[j])
			{
				cnt=cnt+n/k;
			}
			num[p[j]]=cnt;
		}
		printf("Case %lld: %lld = ", i, n);
		for(j=0; j<100; j++)
		{
			if(num[j]!=0)
			{
				printf("%lld (%lld)", j, num[j]);
				break;
			}
		}
		for(j++; j<100; j++)
		{
			if(num[j]!=0)
				printf(" * %lld (%lld)", j, num[j]);
		}
		printf("\n");
	}
	return 0;
}
