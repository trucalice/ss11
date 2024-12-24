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
    for (i = 0; i < n; i++) {
        for (j = 0; j < m - 1; j++) {
            for (k = j + 1; k < m; k++) {
                if (arr[i][j] > arr[i][k]) {
                    temp = arr[i][j];
                    arr[i][j] = arr[i][k];
                    arr[i][k] = temp;
                }
            }
        }
    }
    printf("Mang sau khi sap xep tang dan theo tung dong:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

