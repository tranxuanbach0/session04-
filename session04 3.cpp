#include <stdio.h>

int main() {
    int number;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d chia het cho ca 3 va 5.\n", number);
    } else if (number % 3 == 0) {
        printf("%d chia het cho 3.\n", number);
    } else if (number % 5 == 0) {
        printf("%d chia het cho 5.\n", number);
    } else {
        printf("%d khong chia het cho 3 hay 5.\n", number);
    }

    return 0;
}

