#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int counts[100] = {0};
    for(int i = 0; i < n; i++) {
        counts[arr[i]]++;           // VD: arr[0] = 2, arr[1] = 3, arr[2] = 2
                                    //i=0>> counts[2]=1; i=1>> counts[3]=1, i=2>>counts[2]=2

    }

    printf("Ket qua:\n");
    for(int i = 0; i < 100; i++) {
        if(counts[i] > 0) {
            printf("So %d xuat hien %d lan\n", i, counts[i]);
        }
    }

    return 0;
}
