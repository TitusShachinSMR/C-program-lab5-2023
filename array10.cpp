#include<stdio.h>
int main()
{ int i,j,temp,k=0,l;
 int n;
 printf("enter the lenght of the array\n");
 scanf("%d",&n);
 int a[n];
 printf("enter the array:\n");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {for(j=i+1;j<n;j++)
 {if(a[i]==a[j])
 {l=i;k=k+1;break;
 }
 }
 if(k>0)
 {break;
 }
 
 }
 printf("first repeating  number is %d",a[l]);}
