#include<stdio.h>
#define IP(a) scanf("%d",&a);
#define OP(a) printf("%2d",a);
int i=1;
void print(int num)
{
	if(i<=num)
	{
		printf("%5d",i);
		i++;
		print(num--);
	}
}
void main()
{
	int num;
	IP(num);
	print(num);
}