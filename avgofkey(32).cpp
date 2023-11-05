#include<stdio.h>
#include<math.h>
int main()
{ int n,i,j,l=0,x;
printf("enter the lenght of array:");
scanf("%d",&n);
int a[n];
printf("enter the array:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("enter the key:");
scanf("%d",&x);
int b[n];
for(i=0;i<n;i++)
{ b[i]=(x+a[i])/2;
}
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
{ if(b[i]==a[j])
{ l=l+1;
}
}printf("%d  ",l);
l=0;
}
}
