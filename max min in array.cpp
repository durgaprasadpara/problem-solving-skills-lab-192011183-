#include<stdio.h>
#include<conio.h>
int main() {
	int i,j,temp;
    int a[]={5,2,36,18,25,30};
    for(i=0;i<=5;i++)
    {
    	for(j=i+1;j<=5;j++)
    	{
    		if(a[i]>a[j])
    		{
    			temp=a[i];
    			a[i]=a[j];
    			a[j]=temp;
			}
		}
	}
		printf("The minimum numberis %d\n",a[0]);
		printf("the maximum number is %d\n ", a[5]);
}
