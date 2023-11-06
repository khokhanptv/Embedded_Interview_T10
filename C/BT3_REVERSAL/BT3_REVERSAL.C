#include <stdio.h>

void reverse(char* start, char* end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char* str) {
    char* wordStart = str;
    char* temp = str;

    while (*temp) {
        temp++;
        if (*temp == ' ' || *temp == '\0') {
            reverse(wordStart, temp - 1);
            wordStart = temp + 1;
        }
    }

    reverse(str, temp - 1);
}

int main() {
    char input[1000];
    printf("NHAP CHUOI: ");
    fgets(input, sizeof(input), stdin);

    reverseWords(input);

    printf("CHUOI DAO NGUOC LA:%s\n", input);

    return 0;
}