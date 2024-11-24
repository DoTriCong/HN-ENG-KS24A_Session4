#include <stdio.h>

int main(){
	int a, b, c;
	printf("Moi ban nhap vao 3 so nguyen: ");
	scanf("%d %d %d", &a, &b, &c);
	if(c>a && c<b){
	printf("So thu ba nam trong khoang so thu nhat va so thu hai");
	}else{
	printf("So thu ba khong nam trong khoang so thu nhat va so thu hai");
	}

}
