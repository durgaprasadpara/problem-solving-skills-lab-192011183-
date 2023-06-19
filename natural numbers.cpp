#include<stdio.h>
int main()
{
	int i;
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		printf(" %d ", i);
	}
	return 0;
	
}
