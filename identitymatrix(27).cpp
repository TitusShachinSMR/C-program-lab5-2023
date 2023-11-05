
 #include <stdio.h>

int main() {
    int m, n,i,j,l=0,o=0;
   
    printf("Enter the number of rows : ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
     int a[m][n];
    if(m!=n){printf("it is not a diagonal matrix\n");}
       printf("Enter elements of the matrix:\n");
    for (int i = 0; i <m; i++) {
        for (int j = 0; j <n; j++) {
            scanf("%d", &a[i][j]);
        }
    }   
    for(i=0;i<m;i++)
    {for(j=0;j<m;j++)
    { if(i==j&&a[i][j]==1)
    {l=l+1;
	}
	if(i!=j&&a[i][j]==0)
	{ o=o+1;
	}
	}
	}
	if(l==m&&o==(m*m-m))
	{printf("it is identity matrix");
	
	}
	else { printf("it is not identity matrix");
	}


}
