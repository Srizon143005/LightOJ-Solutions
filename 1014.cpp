#include <stdio.h>
#include <math.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long int

int main()
{
	ll p, l, t, num, i, s_num, j;
	scanf("%lld", &t);
	for(i=1; i<=t; i++)
	{
		scanf("%lld %lld", &p, &l);
		num=p-l;
		printf("Case %lld:", i);
		if(num<=l || num==0)
		{
			printf(" impossible\n");
			continue;
		}
		s_num=sqrt(num);
		vector <ll> ans;
		for(j=1; j<=s_num; j++)
		{
			if(num%j==0)
			{
				if(j==num/j)
					ans.push_back(j);
				else
				{
					ans.push_back(j);
					ans.push_back(num/j);
				}
			}
		}
		sort(ans.begin(), ans.end());
		for(j=0; j<ans.size(); j++)
		{
			if(ans[j]>l)
				printf(" %lld", ans[j]);
		}
		printf("\n");
	}
}
