#include<stdio.h>
#include<math.h>
int main()
{ int n,i,j,sum=0;
printf("enter the lenght of array:");
scanf("%d",&n);
int a[n];
printf("enter the array:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{ if(abs(a[i])==abs(a[j]))
{ a[j]=123;
}
}
if(a[i]!=123)
{sum=sum+1;
}
}
printf("number of absolute integers =%d",sum);
}
