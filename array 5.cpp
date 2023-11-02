#include<stdio.h>
int main()
 { int i,j,temp;
 int n;
 printf("enter the lenght of the array\n");
 scanf("%d",&n);
 int a[n];
 printf("enter the array:\n");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
 }
 for(i=1;i<n;i++)
 { if(i%2==1)
 {temp=a[i];
 a[i]=a[i-1];
 a[i-1]=temp;
 }
 }
 for(i=0;i<n;i++)
 {printf("%d ",a[i]);
 } 
}
