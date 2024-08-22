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
	
	 // 91,102,33
	 if (a>b)
	 {
	 	if (a>c)
	 	{
	 		printf("%d is Graetest" ,a);
		 }
		 else
		 {
		 	printf("%d is Graetest" ,c);
		 }
	}
	
	else
	{
		if (b>c)
		{
			printf("%d is Graetest" ,b);
		}
		else
		{
			printf("%d is Graetest" ,c);
		}
	}	
}