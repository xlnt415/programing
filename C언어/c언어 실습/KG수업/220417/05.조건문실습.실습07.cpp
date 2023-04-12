#include <stdio.h>

int main(void){
	int num;
	scanf("%d", &num);
	
	while (num < 10){
		printf("정수 입력>> ");
	}
	printf("10이하가 입력되어 종료합니다."); 
	return 0;
}
