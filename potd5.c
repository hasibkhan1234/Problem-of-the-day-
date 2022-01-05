#include<stdio.h>
int main(void) {
    int i,j,n,temp,count;
    printf("enter how many numbers you want to enter\n");
    scanf("%d",&n);
    int a[n];
    printf("enter the numbers\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    {
        if(a[j]<a[i])
        {
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    for(i=a[0];i>=1;i--)
    {
        count=0;
        for(j=0;j<n;j++)
        {
         if(a[j]%i==0)
         count++;
        }
        if(count==n)
        {
         printf("GCF is %d\n",i);
         break;
        }
    }
	return 0;
}

