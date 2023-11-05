#include<stdio.h>
#include<math.h>
int comb(int a, int b)
{ int z;
z= tgamma(a+1)/(tgamma(a-b+1)*tgamma(b+1));
return z;
}
int main()
{ int n,i,j,x,sum=0,l=0;
printf("enter the lenght of array(such that it is even):");
scanf("%d",&n);
int a[n];
printf("enter the array:");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
printf("enter the key for checking");
scanf("%d",&x);
for(i=0;i<n;i++)
{ for(j=i+1;j<n;j++)
{ sum=a[i]+a[j];
if(sum%x==0)
{ l=l+1;
}
}
}
if(l==comb(n,2))
{ printf("true");
}
else
{printf("false");
}}
