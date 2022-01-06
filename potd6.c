#include<stdio.h>
void main()
{
    int i,j,temp,n;
    printf("enter how many elements you want to enter\n");
    scanf("%d",&n);
    int a[n],b[n];
    printf("enter elements\n");
    for(i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
     b[i]=a[i];
    }
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
    for(j=0;j<n;j++)
    {
     if(b[j]==a[0])
     printf("%d\n",j);
    }
}
