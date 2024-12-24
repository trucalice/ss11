#include <stdio.h>

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Nhap mot so nguyen can tim: ");
    scanf("%d", &x);
    int left = 0, right = n - 1, position = n;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x) {
            position = mid;
            break;
        }
        if (arr[mid] < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (position < n) {
        printf("Phan tu %d duoc tim thay tai vi tri %d.\n", x, position);
    } else {
        printf("Khong tim thay phan tu %d trong mang.\n", x);
    }
    return 0;
}

} 
