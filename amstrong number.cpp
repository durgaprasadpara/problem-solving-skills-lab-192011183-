#include<stdio.h>
#include<conio.h>
int main()
{
	int sum=0,temp;
	int n;
	int rem;
	printf("enter the number:\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		rem=n%10;
		sum+=rem*rem*rem;
		n=n/10;
	}
	if(temp==sum)
	printf("amstrong number");
	else
	{
	printf("not an amstrong number");
}
	return 0;
	
}
