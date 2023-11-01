#include<stdio.h>
#include<math.h>
int main()
{int m,n,i,sum1=0,sum2=0;
printf("enter the lenght of array 1:");
scanf("%d",&m);
int a[m];
printf("enter the array:");
for(i=0;i<m;i++)
{scanf("%d",&a[i]);
sum1=sum1+(a[i]*pow(10,m-i-1));
}
printf("enter the lenght of array 1:");
scanf("%d",&n);
int b[n];
printf("enter the array:");
for(i=0;i<n;i++)
{scanf("%d",&b[i]);
  sum2=sum2+(b[i]*pow(10,n-i-1));
}
printf("sum of array=%d",sum1+sum2);

}
