#include<stdio.h>
void mintime(int n,int *a,int *b)
{
    int result=0,i;
    for(i=0;i<n;i++)
    {
      if(a[i]<b[i])
      result=result+*(a+i);
      else
      result=result+*(b+i);
    }
    printf("minimum time to reach home is %d\n",result);
}
void main()
{
    int n;
    printf("enter how many station you have for home\n");
    scanf("%d",&n);
    int i,a[n],b[n];
    printf("enter time in minutes to reach from one station to another by train a\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter time in minutes to reach from one station to another by train b\n");
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    mintime(n,&a,&b);
}
