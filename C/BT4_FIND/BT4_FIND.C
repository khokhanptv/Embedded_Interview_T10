#include <stdio.h>

int main() {
    char chuoi[1000];
    char tu_can_tim[100];

    // Nhập chuỗi và từ cần tìm
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    int i = 0, j = 0;
    while (chuoi[i] != '\0' && chuoi[i] != '\n') {
        i++;
    }
    chuoi[i] = '\0'; // Loại bỏ ký tự xuống dòng (nếu có)

    printf("Nhap tu can tim: ");
    fgets(tu_can_tim, sizeof(tu_can_tim), stdin);

    i = 0;
    while (tu_can_tim[i] != '\0' && tu_can_tim[i] != '\n') {
        i++;
    }
    tu_can_tim[i] = '\0'; // Loại bỏ ký tự xuống dòng (nếu có)

    // Tìm từ trong chuỗi
    i = 0;
    while (chuoi[i] != '\0') {
        j = 0;
        while (tu_can_tim[j] != '\0' && chuoi[i + j] == tu_can_tim[j]) {
            j++;
        }

        if (tu_can_tim[j] == '\0') {
            printf("Tu '%s' co o vi tri %d\n", tu_can_tim, i);
        }

        i++;
    }

    return 0;
}
