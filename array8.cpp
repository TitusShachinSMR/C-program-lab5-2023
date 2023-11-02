#include<stdio.h>
int main()
{   int i,j,temp1,temp2,l=0;
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
 temp1=a[j];
 a[j]=a[j+1];
 a[j+1]=temp1;}
 }
 for(i=0;i<n;i++)
 {printf("%d ",a[i]);
 }
 printf("\n");
 
 for(i=0;i<n;i++)
 {if(a[i]==a[i+1])
 {a[i]=0;
 l=l+1;
 }
 }
 for(i=0;i<n-1;i++)
 {for(j=0;j<n-1-i;j++)
 if(a[j]>a[j+1])
 {
 temp2=a[j];
 a[j]=a[j+1];
 a[j+1]=temp2;}
 }
 for(i=l;i<n;i++)
 {printf("%d ",a[i]);
 }

}
