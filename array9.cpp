//finding missing integer in the range [1,n]

#include<stdio.h>
int main()
{ int i,j,l;
 int n;
 printf("enter the lenght of the array\n");
 scanf("%d",&n);
 int a[n];
 printf("enter the array:\n");
 for(i=0;i<=n-2;i++)
 {scanf("%d",&a[i]);
 }
 for(i=0;i<=n-2;i++)
 {if(a[i]!=i+1)
 { l=i;break;
 }}
 printf("%d is missing",l+1);
 }
 
