#include<stdio.h>
long long int cum[1000009];
int main()
{
	int t;
	scanf("%d",&t);
	int lim=1000009;
	int i,j;
	int num[1000009],prime[900000];
	for(i=0;i<lim;i++)
		num[i]=i+2;
	for(i=0;i<lim;i++)
	{
		if(num[i]!=-1)
		{
			for(j=2*num[i]-2;j<lim;j+=num[i])	
				num[j]=-1;
		}
	}
	j=0;
	for(i=0;i<lim;i++)
	{
		cum[i]=0;
		if(num[i]!= -1)
		prime[j++]=num[i];
	}
	j=0;
	for(i=1;i<lim;i++)
	{
		cum[i]+=cum[i-1];
		if(i==prime[j])
		{
			cum[i]+=prime[j];
			j++;
		}
	}
	while(t--){
	int n,m;
        scanf("%d %d",&n,&m);
	if(n==0)
	printf("%llu\n",cum[m]);
	else
	printf("%llu\n",cum[m]-cum[n-1]);
	}
	return 0;
}
