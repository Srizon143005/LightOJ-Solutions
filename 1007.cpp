#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll unsigned long long int

ll phi[5000003];

ll phii()
{
	ll i, j;
	for(i=2; i<5000003; i++)
	{
		if(!phi[i]==1)
		{
			phi[i]=i-1;
			for(j=i*2; j<5000003; j=j+i)
			{
				if(!phi[j]==1)
					phi[j]=j;
				phi[j]=phi[j]-(phi[j]/i);
			}
		}
	}
	for(i=2; i<5000003; i++)
	{
		phi[i]=phi[i]*phi[i];
		phi[i]=phi[i]+phi[i-1];
	}
}

int main()
{
	phii();
	ll i, t, a, b;
	scanf("%llu", &t);
	for(i=1; i<=t; i++)
	{
		scanf("%llu %llu", &a, &b);
		if(a>b)
			swap(a, b);
		printf("Case %llu: %llu\n", i, phi[b]-phi[a-1]);
	}
	return 0;
}
