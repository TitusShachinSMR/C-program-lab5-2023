#include<stdio.h>
int main()
{ int i,j,temp,k=0,m;
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
 { 
 if(a[i]==a[j])
 {k=k+1;
 }}
 
 if(k==0)
 {m=i;break;
 } else{k=0;
 }
 
 }
 printf("first  non repeating  number is %d",a[m]);}
