#include <stdio.h>

int main() {
    int m,n,i,j;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int a[m][n];int sum=0;

    printf("Enter elements of the matrix:\n");

    for ( i = 0; i <m; i++) {
        for (j = 0; j <n; j++) {
            scanf("%d", &a[i][j]);
            if(i==j)
            { sum=sum+a[i][j];
			}
        }
    }
    printf("sum of left diagonal=%d",sum);
}

