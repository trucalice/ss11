#include <stdio.h>

int main() {
    int n, a, i, count = 0;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap so nguyen can tim: ");
    scanf("%d", &a);
    int positions[n];
    for (i = 0; i < n; i++) {
        if (arr[i] == a) {
            positions[count] = i;
            count++;
        }
    }
    if (count == 0) {
        printf("Khong tim thay phan tu %d trong mang.\n", a);
    } else {
        printf("Phan tu %d duoc tim thay tai cac vi tri: ", a);
        for (i = 0; i < count; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    }
    return 0;
}

