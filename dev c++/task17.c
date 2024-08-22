#include<stdio.h>
mai()
{
	int n,sum=0;
	printf("Enter Number : ");
	scanf("%d",&n);
	
	int i=1;
	// n=5
	while(i<=n)
	{
		sum=sum+1;// sum of two value
		i++;
	}
	printf("sum of Number is : %d",sum);
}
