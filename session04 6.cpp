#include <stdio.h>

int main() {
    int chiSoCu, chiSoMoi, soDienTieuThu;
    float tienDien = 0;

    printf("nhap chi so cu: ");
    scanf("%d", &chiSoCu);
    printf("nhap chi so moi: ");
    scanf("%d", &chiSoMoi);

    if (chiSoMoi < chiSoCu) {
        printf("chi so moi phai lon hon chi so cu.\n");
        return 1;
    }

    soDienTieuThu = chiSoMoi - chiSoCu;

    if (soDienTieuThu <= 50) {
        tienDien = soDienTieuThu * 10000;
    } else if (soDienTieuThu <= 100) {
        tienDien = 50 * 10000 + (soDienTieuThu - 50) * 15000;
    } else if (soDienTieuThu <= 150) {
        tienDien = 50 * 10000 + 50 * 15000 + (soDienTieuThu - 100) * 20000;
    } else if (soDienTieuThu <= 200) {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDienTieuThu - 150) * 25000;
    } else {
        tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDienTieuThu - 200) * 30000;
    }

    printf("so dien tieu thu: %d kWh\n", soDienTieuThu);
    printf("so tien phai tra: %.2f VND\n", tienDien);

    return 0;
}
