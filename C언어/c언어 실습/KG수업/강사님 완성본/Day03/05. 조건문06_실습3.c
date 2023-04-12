#include <stdio.h>

int main(void) {
	int num1; int num2; int num3;
	printf("정수 3개 입력 >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	// 1. num1이 제일 크지 않으면 어떻게 할 것인가?
	// 2. 서로 같은 약수나, 서로 다른 약수가 들어왔을 때 어떻게 할 것인가?
	if (num1 % num2 == 0) {
		printf("%d는 %d의 배수입니다.\n", num1, num2);
	}
	else if (num1 % num3 == 0) {
		printf("%d는 %d의 배수입니다.\n", num1, num3);
	}
	// num1에 대해서 num2, num3 둘다 약수가 아닌 경우
	else {
		printf("%d의 약수는 없습니다.\n", num1);
	}
	return 0;
}