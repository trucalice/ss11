#include <stdio.h>

int main() {
    int row, col, i, j, k, temp;
    printf("Nhap so dong row: ");
    scanf("%d", &row);
    printf("Nhap so cot col: ");
    scanf("%d", &col);
    if (row != col) {
        printf("Ma tran phai vuong (row == col) de co duong cheo chinh.\n");
    } else {
        int arr[row][col];
        printf("Nhap cac phan tu cua mang:\n");
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                printf("Phan tu [%d][%d]: ", i, j);
                scanf("%d", &arr[i][j]);
            }
        }
        for (i = 0; i < row - 1; i++) {
            for (j = i + 1; j < row; j++) {
                if (arr[i][i] > arr[j][j]) {
                    temp = arr[i][i];
                    arr[i][i] = arr[j][j];
                    arr[j][j] = temp;
                }
            }
        }
        printf("Mang sau khi sap xep duong cheo chinh tang dan:\n");
        for (i = 0; i < row; i++) {
            for (j = 0; j < col; j++) {
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

