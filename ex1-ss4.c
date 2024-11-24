#include <stdio.h>

int main(){
	
	int num;
	printf("Nhap vao mot so nguyen: ");
	scanf("%d",&num);
	if(num>0){
		printf("%d la so duong\n",num);
	}else{
		printf("%d la so am\n",num);
	}

        return 0;
}
