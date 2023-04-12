#include <stdio.h>

int main(void) {
	int num;
	printf("정수 입력 >> ");
	scanf_s("%d", &num);
	// if 단독사용은, if 조건문 및 종속문이 없어도 코드가 성립해야 한다.
	if (num % 2 == 0) {
		printf("2의 배수입니다.\n");
	}
	if (num % 7 == 0) {
		printf("7의 배수입니다.\n");
	}
	if (num < 15) {
		printf("15 미만입니다.\n");
	}
	if (num > 15) {
		printf("15 초과입니다.\n");
	}
	printf("입력된 정수 : %d\n", num);
	return 0;
}