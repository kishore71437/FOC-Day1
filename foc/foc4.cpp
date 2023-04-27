#include<stdio.h>
int main()
{
	int range;
	printf("Enter a range:");
	scanf("%d",&range);

	
	for(int loop=1;loop<=range;loop ++)
		if(loop%2)
		printf("%d\t",loop);
}
