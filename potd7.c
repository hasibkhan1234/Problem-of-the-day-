#include<stdio.h>
void main()
{
   int n,a,i,rev=0;
   printf("enter a number\n");
   scanf("%d",&a);
   n=a;
   while(n!=0)
   {
       rev=rev*10+n%10;
       n=n/10;
   }
   if(rev==a & a>0)
   printf("True\n");
   else 
   printf("False\n");
}
