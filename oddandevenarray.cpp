#include<stdio.h>
int main()
{ int n,i,l=0;
printf("enter the lenght of array\n");
scanf("%d",&n);int a[n],b[n],c[n];

printf("enter the array:"); 
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
} int j=0,k=0;
for(i=0;i<n;i++)
{if(a[i]%2==0)
{b[j]=a[i];++j;l=l+1;
}
if(a[i]%2==1)
{c[k]=a[i];++k;
}
}
for(i=0;i<l;i++)
printf("%d ",b[i]);
printf("\n");
for(i=0;i<n-l;i++)
printf("%d ",c[i]);}



