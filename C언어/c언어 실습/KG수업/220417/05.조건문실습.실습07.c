#include <stdio.h>

int main(void){
	int num;
	printf("정수 입력>> ");
	scanf("%d", &num);
	
	while (num > 10){
		printf("정수입력 >>");
		scanf("%d", &num); 
		//불필요한 연산을 하게 된다. 
		//if (num<=10){
			printf("10이하가 입력이 되어 종료합니다.\n");
			
		}
	}
	printf("10이하가 입력이 되어 종료합니다.");
	return 0;
}
