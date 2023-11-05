#include <stdio.h>

int main() {
    int m, n;int temp;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    int a[m][n];int b[n][m];

    printf("Enter elements of the matrix:\n");
    for (int i = 0; i <m; i++) {
        for (int j = 0; j <n; j++) {
            scanf("%d", &a[i][j]);
        }
    }    for (int i = 0; i <m; i++) {
        for (int j = 0; j <n; j++) {
            temp=a[i][j];
            a[i][j]=b[j][i];
            b[j][i]=temp;
        }
    }
    for (int i = 0; i <n; i++) {
        for (int j = 0; j <m; j++) {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }

}
