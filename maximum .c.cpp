#include<stdio.h>
int main()
{
	int a,b,max;
	printf("enter two num:");
	scanf("%d%d",&a,&b);
	max=(a>b)?a:b;
	printf("max of %d and %d is %d",max);
	return 0;
}
