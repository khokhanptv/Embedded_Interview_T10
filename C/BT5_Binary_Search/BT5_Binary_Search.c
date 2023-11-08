#include <stdio.h>

#define NUM_CUSTOMERS 10000


int customerIDs[NUM_CUSTOMERS];

// Hàm tìm kiếm nhị phân.
int binarySearch(int arr[], int left, int right, int target) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        
        // Nếu phần tử ở giữa bằng với target, trả về vị trí đó.
        if (arr[mid] == target) return mid;
        
        // Nếu phần tử ở giữa lớn hơn target, tiếp tục tìm kiếm bên trái.
        if (arr[mid] > target) return binarySearch(arr, left, mid - 1, target);
        
        // Nếu phần tử ở giữa nhỏ hơn target, tiếp tục tìm kiếm bên phải.
        return binarySearch(arr, mid + 1, right, target);
    }
    
    // Nếu không tìm thấy, trả về -1.
    return -1;
}

int main() {
    // Khởi tạo danh sách các ID (đã sắp xếp).
    for (int i = 0; i < NUM_CUSTOMERS; i++) {
        customerIDs[i] = i + 1;
    }

    int targetID;
    printf("Nhap ID: ");
    scanf("%d", &targetID);

    // Tìm kiếm ID bằng thuật toán tìm kiếm nhị phân.
    int result = binarySearch(customerIDs, 0, NUM_CUSTOMERS - 1, targetID);

    // Kiểm tra kết quả tìm kiếm.
    if (result != -1) {
        printf("ID da OK.\n");
    } else {
        printf("ID khong chinh xac.\n");
    }

    return 0;
}
