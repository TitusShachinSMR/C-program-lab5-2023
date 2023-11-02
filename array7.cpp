#include<stdio.h>
int main()
{int i,j,temp;
 int n;
 printf("enter the lenght of the array\n");
 scanf("%d",&n);
 int a[n];
 printf("enter the array:\n");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
 }
 for(i=0;i<n-1;i++)
 {for(j=0;j<n-1-i;j++)
 if(a[j]>a[j+1])
 {
 temp=a[j];
 a[j]=a[j-1];
 a[j-1]=temp;}
 }
 int s;
 printf("enter the s value for finding sth term of largest and smallest");
 scanf("%d",&s);
 printf("%d th smallest number is %d\n",s,a[s-1]);
 printf("%d th largest number is %d\n",s,a[n-s]);}
 

