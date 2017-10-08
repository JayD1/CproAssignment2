#include<stdio.h>

long long int dum[1000009];
long long int arr[1000001];

int main()
{
	long long int i,j,k,q,a,n;
	scanf("%lld %lld",&n,&q);
	for(a=0;a<n;a++)
	scanf("%lld",&arr[a]);
	for(a=0;a<q;a++)
	{
		scanf("%lld %lld %lld",&i,&j,&k);
		dum[i]+=k;
		dum[j+1]+=-k;
	}
	for(a=0;a<n+1;a++)
	dum[a]+=dum[a-1];
	for(a=0;a<n;a++)
	arr[a]+=dum[a];
	for(a=0;a<n;a++)
	printf("%lld ",arr[a]);
	return 0;
}
