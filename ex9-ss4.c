#include <stdio.h>

int main() {
    int ngay, thang, nam;

    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    int hopLe = 1; 
    if (nam < 1) {
        hopLe = 0; 
    } else if (thang < 1 || thang > 12) {
        hopLe = 0; 
    } else {
        int soNgayTrongThang;

        if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
            soNgayTrongThang = 31;
        } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
            soNgayTrongThang = 30;
        } else if (thang == 2) {
          
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
                soNgayTrongThang = 29; 
            } else {
                soNgayTrongThang = 28; 
            }
        }

        if (ngay < 1 || ngay > soNgayTrongThang) {
            hopLe = 0; 
        }
    }

    if (hopLe) {
        printf("Ngày %d/%d/%d là hop le.\n", ngay, thang, nam);
    } else {
        printf("Ngày %d/%d/%d không hop le.\n", ngay, thang, nam);
    }

    return 0;
}

