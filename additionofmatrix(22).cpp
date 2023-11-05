#include<stdio.h>
int main()
{ int i,j,k;int n,m;char o;int x;
printf("enter the rows and coloumns of matrix");
scanf("%d",&n);
scanf("%d",&m);int a[n][m];int b[n][m];int c[n][m];
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{scanf("%d",&b[i][j]);
}
}

printf("enter 1 for addition and 2 for subtraction\n");
scanf("%d",&x);

if(x==1)
{

for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{ c[i][j]=a[i][j]+b[i][j];
}
}}
else{for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{ c[i][j]=a[i][j]-b[i][j];
}
}
}
for(i=0;i<n;i++)
{for(j=0;j<m;j++)
{printf("%d",c[i][j]);
} printf("\n");
}
}
