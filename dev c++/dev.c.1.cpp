#include<stdio.h>
main ()
{
    int n;
    
    printf("Enter Number 1 : ");
    scanf("%d",&n);
    
    
    if(n>0)
    {
           printf(" Number is Positive");
           
           }
           else if (n==0) // ladder if/else
           {
                printf("Neither negative nor positive!!");
                }
                else 
                {
                     printf(" Number is Nagative");
                     }
}                         		
