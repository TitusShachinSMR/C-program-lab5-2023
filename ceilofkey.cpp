#include<stdio.h>
int main()
{ int i,j,k;int l=0;int y;int x;
int a[10]={1,2,3,5,6,7,9,12,15,17};
printf("enter the key:");
scanf("%d",&x);
for(i=0;i<100;i++)
{ for(j=0;j<10;j++)
{ if(x+i==a[j])
{ y=j;l=1; break;
}
}if(l==1)
{break;
}
}
printf("ceil of key is %d",a[y]);

}
