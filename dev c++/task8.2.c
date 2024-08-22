#include<stdio.h>
main()
{
	int i,k,j;
	
	for(i=1;i<=5;i++) //row
	{
		for(k=1;k<=5-i;i++)//space
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
