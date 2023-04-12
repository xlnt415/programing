#include <stdio.h>

int main(void){
	int num1; int num2; int num3;
	printf("정수 3개 입력 >> ");
	scanf("%d%d%d", &num1, &num2, &num3);
	if (num1 % num2 == 0){
		printf("%d은 %d의 배수입니다.", num1, num2);
	} 
	else if(num1 % num3 == 0){
		printf("%d은 %d의 배수입니다.", num1, num3);
	}
	else {
		printf("%d의 약수는 없습니다.\n", num1);
	}
	return 0;
}
