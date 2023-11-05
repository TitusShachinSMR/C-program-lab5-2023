#include<stdio.h>
int main()
{ int i,j,k=0,l=0;
 int a[5];
 for(i=0;i<=4;i++)
 {scanf("%d",&a[i]);
 }
 for(i=0;i<=4;i++)
 { for(j=i+1;j<=4;j++)
 {
	if(a[i]==a[j])
	{l=l+1;
	 } }
	     if(l==0)
 { printf("first non repeating  number=%d",a[i]);
	break;	 }
	l=0;
 }
}
