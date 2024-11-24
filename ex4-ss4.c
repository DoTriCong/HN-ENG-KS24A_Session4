#include <stdio.h>
int main(){
	int month;
	printf("Moi ban nhap vao 1 thang trong nam: ");
	scanf("%d", &month);
	switch (month){
		case 1:
			printf("So ngay trong thang 1 la 31");
			break;
		case 2:
			printf("So ngay trong thang 2 la 29");
			break;
		case 3:
			printf("So ngay trong thang 3 la 31");
			break;
		case 4:
			printf("So ngay trong thang 4 la 30");
			break;
		case 5:
			printf("So ngay trong thang 5 la 31");
			break;
		case 6:
			printf("So ngay trong thang 6 la 30");
			break;
		case 7:
			printf("So ngay trong thang 7 la 31");
			break;
		case 8:
			printf("So ngay trong thang 8 la 31");
			break;
		case 9:
			printf("So ngay trong thang 9 la 30");
			break;
		case 10:
			printf("So ngay trong thang 10 la 31");
			break;
		case 11:
			printf("So ngay trong thang 11 la 30");
			break;
		case 12:
			printf("So ngay trong thang 12 la 31");
			break;
		default:
			printf("So thang khong hop le");
	
			
	}
}
