#include<stdio.h>
#define OP(a) printf("%d",a);
#define IP(a) scanf("%d",&a);
void decBin(int num)
{
if(num!=0)
{
	decBin(num/2);
	printf("%d",num%2);
}
}
int main()
{
	int dec;
	IP(dec);
	printf("BINARY EQU OF %d IS : ",dec);
	decBin(dec);
	return 0;
}