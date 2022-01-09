#include<stdio.h>
void main(){
    int n;
    printf("enter how many number of elements you want to enter\n");
    scanf("%d",&n);
    int i,j,a[n],target;
    printf("enter numbers in desending order\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("enter the target,means any two number's sum\n");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==target)
        {
            printf("[%d,%d]\n",i+1,j+1);
            break;
        }
    }
}
