\\deleting duplicate of array
#include<stdio.h>
int main()
{ int n,m,i,j,l=0;
printf("enter the lenght of array 1\n");
scanf("%d",&n);int a[n];

printf("enter sorted array1:"); 
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{if(a[i]==a[j]&&a[i]!=-4000)
{ a[j]=-4000;l=l+1;
}
}
}
int t=0;int b[n-l];
for(i=0;i<n;i++)
{ if(a[i]!=-4000)
{ b[t]=a[i];t++;
}
}
for(i=0;i<n-l;i++)
{printf("%d ",b[i]);
}}
