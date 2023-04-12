#include <stdio.h>

int main(void) {
	// 조건문 : 경우의 수 싸움
	// - 선택적인 코드의 실행
	// 세 정수 중 누가 제일 큽니까?
	int num1; int num2; int num3;
	printf("최대값 판별기\n정수 3개 입력 >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	// 1. 제일 큰 거를 찾는다 - 나머지 2개의 정수는 별 상관없음
	if (num1 >= num2 && num1 > num3) {
		printf("제일 큰 수는 %d입니다.\n", num1);
	}
	else if (num2 > num1 && num2 >= num3) {
		printf("제일 큰 수는 %d입니다.\n", num2);
	}
	else {
		printf("제일 큰 수는 %d입니다.\n", num3);
	}
	// 2. 큰 수가 있으면 그걸로 바꾼다.
	int result = num1;
	if (result < num2) result = num2;
	if (result < num3) result = num3;
	printf("%d가 제일 큽니다.\n", result);
	return 0;
}