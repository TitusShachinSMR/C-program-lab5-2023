#include<stdio.h>
int main()
{int i,j,k;int m,n,l=0,t=0;
int a[n];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{for(j=i+1;j<n;j++)
{ if(a[i]==a[j])
{ l=l+1;
a[j]=-100;
}
}
if(a[i]!=-100)
{ printf("frequency of %d is %d\n",a[i],(l+1));
l=0;
}
}
}
