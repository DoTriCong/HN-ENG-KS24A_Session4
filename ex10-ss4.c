#include<stdio.h>

int main() {
	int a2, b2, c2;
    printf("Nhap vao 3 so nguyen:\n");
    printf("So a: ");
    scanf("%d", &a2);
    printf("So b: ");
    scanf("%d", &b2);
    printf("So c: ");
    scanf("%d", &c2);
    if (a2 > b2) {
        int temp = a2;
        a2 = b2;
        b2 = temp;
    }
    if (a2 > c2) {
        int temp = a2;
        a2 = c2;
        c2 = temp;
    }
    if (b2 > c2) {
        int temp = b2;
        b2 = c2;
        c2 = temp;
    }
    printf("Cac so theo thu tu tu nho den lon: %d, %d, %d\n", a2, b2, c2);


	return 0;
}
 

 
