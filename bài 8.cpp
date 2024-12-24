#include <stdio.h>

int main() {
    int n, m, i, j, k, temp;
    printf("Nhap so dong n: ");
    scanf("%d", &n);
    printf("Nhap so cot m: ");
    scanf("%d", &m);
    int arr[n][m];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (j = 0; j < m; j++) { 
        for (i = 0; i < n - 1; i++) {
            for (k = i + 1; k < n; k++) {
                if (arr[i][j] > arr[k][j]) {
                    temp = arr[i][j];
                    arr[i][j] = arr[k][j];
                    arr[k][j] = temp;
                }
            }
        }
    }
    printf("Mang sau khi sap xep tang dan theo tung cot:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

