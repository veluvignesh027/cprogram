#include<stdio.h>
#define OP(a) printf("%d",a);
#define IP(a) scanf("%d",&a);
int s=0;
int sum(int num)
{
	if(num!=0)
	{
	s=s+num%10;
	sum(num/10);
	}
	return s;
}
void main()
{
	int n;
	IP(n);
	int res=sum(n);
	OP(res);
}