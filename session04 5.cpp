#include <stdio.h>

int main() {
    int so1, so2, so3;
    
      printf("nhap so nguyen thu nhat: ");
    scanf("%d", &so1);
    printf("nhap so nguyen thu hai: ");
    scanf("%d", &so2);
    printf("nhap so nguyen thu ba: ");
    scanf("%d", &so3);
    
       if ((so1 <= so3 && so3 <= so2) || (so2 <= so3 && so3 <= so1)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
