#include<stdio.h>
int main()
{int i,j, k=0;
 int a[5];
 for(i=0;i<=4;i++)
 {scanf("%d",&a[i]);
 }
 for(i=0;i<=4;i++)
 { for(j=i+1;j<=4;j++)
 {if(a[i]==a[j])
 { printf("the first repeating number is%d",a[i]);
 k=k+1;
 break;
 }
 }
 if(k>0)
 {break;
 }
 }
 }

