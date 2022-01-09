#include<stdio.h>
int main()
{
    int i,k,n,z,type_case;
    scanf("%d",&type_case);
    for(z=0;z<type_case;z++)
    {
     scanf("%d%d",&n,&k); /*taking size of array and 
     how many numbers we have to rotate*/
     int a[n],c[n];
     for(i=0;i<n;i++) //taking array elements
     scanf("%d",&a[i]);
     for(i=0;i<n;i++)  //rotating
     {
         if(k==n)
         k=0;
         if(k<n)
          c[i]=a[k];
         k++;
     }
     for(i=0;i<n;i++)
     printf("%d ",c[i]); // printing rotate array
     printf("\n");
     return 0;
    }
}

