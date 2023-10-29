#include<stdio.h>
int main()
{ int i,j,k;int m,n,l=0,t=0;
int a[n];
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{ for(j=i+1;j<n;j++)
{ if(a[i]==a[j])
{ l=l+1;
}
}
if(l>n/2)
{ m=i;t=t+1;break;
}
}
if(t==0)
{printf("no major");
}
else{ printf("major %d frequency %d",a[m],(l+1));
}
}
