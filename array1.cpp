#include<stdio.h>
int main()
{ int n,i,sum=0;
printf("enter the lenght of unsorted array:");
	scanf("%d",&n);
	printf("enter the array");int a[n];
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}
 for(i=0;i<n;i++)
 { sum=sum+a[i];
 }
int min;
min=a[0];
for(i=0;i<n;i++)
{ if(a[i]<min)
{ min=a[i];
}
}
int max=a[0];
for(i=0;i<n;i++)
{if(a[i]>max)
{ max=a[i];
}
}
printf("max=%d\n",max);
printf("min=%d\n",min);
printf("avg=%d\n",sum/n);
}
