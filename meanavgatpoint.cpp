#include<stdio.h>
#include<math.h>
int main()
{ int n,i,j,sum=0,y;
printf("enter the lenght of array:");
scanf("%d",&n);
int a[n];
printf("enter the array:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
int b[n];
for(i=0;i<n;i++)
{ sum=sum+a[i];
   b[i]=sum/(i+1);
}
for(i=0;i<n;i++)
{ printf("%d ",b[i]);
}}
