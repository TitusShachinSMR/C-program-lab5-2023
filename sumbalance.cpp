#include<stdio.h>
#include<math.h>
int main()
{ int n,i,j,sum1=0,sum2=0;
printf("enter the lenght of array(such that it is even):");
scanf("%d",&n);
int a[n];
printf("enter the array:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n/2;i++)
{ sum1=sum1+a[i];
  sum2=sum2+a[n-1-i];
}int y= abs(sum1-sum2);
if(sum1>sum2)
{ 
printf("%d must be added to  any element of second half",y);
}
else printf( "%d must be added to any element of first half",y);
}
