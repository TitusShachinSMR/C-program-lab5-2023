#include<stdio.h>
int main()
{int i,j,k;int m=0,n,l=0;
int a[n];int b[n];int c[n];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ if(a[i]%2==0)
{ l=l+1;
b[l-1]=a[i];
}
e   lse{ m=m+1;
c[m-1]=a[i];
}
}
for(i=0;i<l;i++)
{printf("%d ",b[i]);
}
printf("\n");
for(i=0;i<m;i++)
{printf("%d ",c[i]);
}
}
