#include<stdio.h>
int main ()
{
	int ip1,ip2;
	printf("Enter a number:");
	scanf("%d",& ip1);
	printf("Enter a number:");
	scanf("%d",& ip2);
	if(ip1/ip2>1)
	printf("big = ip1");
	else
	printf("big=ip2");
	return 0;
	}
