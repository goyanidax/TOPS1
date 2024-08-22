#include<stdio.h>
main()
{
	int a;
	printf("Enter temperature : :");
	scanf("%d",&a);
	if(a<=10)
	{
		printf("freeze wether");
	}
	else if(a<=20)
	{
		printf("coold wether");
	}
	else if(a<=30)
	{
		printf("normal wether");
	}
	else
	{
		printf("hot wether");
	}
}	
