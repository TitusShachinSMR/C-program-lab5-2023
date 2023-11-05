#include <stdio.h>

int main() {
    int m,n,i,j;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);
if(m!=n)
{ printf("diagonal not possible");
}
    int a[m][n];int sum=0;

    printf("Enter elements of the matrix:\n");

    for ( i = 0; i <m; i++) {
        for (j = 0; j <n; j++) {
            scanf("%d", &a[i][j]);
            
        }
    }
    for(i=0;i<m;i++)
    { sum=sum+a[i][m-i-1];
	}
	printf("sum of right diagonal=%d",sum);
}
