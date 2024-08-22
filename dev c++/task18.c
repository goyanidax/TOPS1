#include<stdio.h>
main()
{
	int a,b,c;
	
	printf(" Enter Number a : ");
	scanf("%d",&a);
	
	printf(" Enter Number b : ");
	scanf("%d",&b);
	
	printf(" Enter Number c : ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("%d is Greatest" ,a);
	}
	else if(b>a && b>c)
	{
		printf("%d is Greatest" ,b);
	}
	else
	{
		printf("%d is Greatest" ,c);
	}
}
