#include<stdio.h>
int main()
{ int i,j,k,x,m=0,l=0,s,h,c;
 int n;
 printf("enter the lenght of the array\n");
 scanf("%d",&n);
 int a[n];
 printf("enter the array:\n");
 for(i=0;i<n;i++)
 {scanf("%d",&a[i]);
 }
 printf("enter the number for finding triplet:\n");
 scanf("%d",&x);
 for(i=0;i<n;i++)
 {for(j=i+1;j<n;j++)
 {for(k=k+1;k<n;k++)
 {if(a[i]+a[j]+a[k]==x)
 {s=a[i];h=a[j];c=a[k];l=l+1;break;
 }
 } if(l>0)
 {break;}
 }
 if(l>0){break;}
 }
 printf("%d %d %d",s,h,c);
}
 
 
