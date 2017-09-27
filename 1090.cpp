#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdlib.h>
using namespace std;
#define ll long long int

ll no2, no5;

ll nozif(ll n, ll n1)
{
	ll number=0;
	while(n>0)
	{
		number=number+n/n1;
		n=n/n1;
	}
	return number;
}

ll chocolate(ll n, ll r)
{
	ll a2, a5, b2, b5, c2, c5;
	a2=nozif(n, 2);
	a5=nozif(n, 5);
	b2=nozif(r, 2);
	b5=nozif(r, 5);
	c2=nozif(n-r, 2);
	c5=nozif(n-r, 5);
	no2=a2-(b2+c2);
	no5=a5-(b5+c5);
}

ll pf(ll n, ll n1)
{
	ll c=0;
	while(n>0 && !(n%n1))
	{
		n=n/n1;
		c++;
	}
	return c;
}

int main()
{
    ll t, n, r, p, q, i;
    scanf("%lld", &t);
    for(i=0; i<t; i++)
	{
		no2=no5=0;
		scanf("%lld %lld %lld %lld", &n, &r, &p, &q);
		chocolate(n, r);
		no2=no2+pf(p, 2)*q;
		no5=no5+pf(p, 5)*q;
		ll zero=min(no2, no5);
		printf("Case %lld: %lld\n", i+1, zero);
	}
	return 0;
}
