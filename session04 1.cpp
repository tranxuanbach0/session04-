#include <iostream>#include <stdio.h>

int main() {
    int number;
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &number);

    if (number > 0) {
        printf("So duong\n");
    } else if (number < 0)
        printf("So am\n");

    return 0;
}

