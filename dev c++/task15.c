#include<stdio.h>
main()
{
	int n;
	int i=1;
	
	printf("Enter Number :: ");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\n",n);
		n=n-1;
	}
}
