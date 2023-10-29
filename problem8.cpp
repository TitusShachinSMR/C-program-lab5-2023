#include<stdio.h>
int main()
{int i,j,k=0,temp1,temp2;
int a[10];
for(i=0;i<10;i++)
{ scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
  { for(j=0;j<=9;j++)
  {if(a[j+1]<a[j])
  { temp1=a[j];
    a[j]=a[j+1];
    a[j+1]=temp1;
  }
  
}
}
for(i=0;i<10;i++)
{if(a[i]==a[i+1])
{ a[i]=0;
  k=k+1;
}
}
for(i=0;i<10;i++)
  { for(j=0;j<=9;j++)
  {if(a[j+1]<a[j])
  { temp2=a[j];
    a[j]=a[j+1];
    a[j+1]=temp2;}
}}
for(i=k;i<10;i++)
{printf("%d ",a[i]);
}
}
