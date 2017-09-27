#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long int

double a[1000001];

int main()
{
	ll t, m, n, i;
	a[0]=0;
	for(i=1; i<=1000001; i++)
		a[i]=a[i-1]+log(i+0.0);
	scanf("%lld", &t);
	for(i=1; i<=t; i++)
	{
		scanf("%lld %lld", &m, &n);
		printf("Case %lld: %.0lf\n", i, floor(a[m]/log(n*1.0)+1));
	}
	return 0;
}
