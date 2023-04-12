#include <stdio.h>

int main(void) {
	int num1;
	int num2;

	num1 = 1717;
	num2 = 19;
	//변수가 준비되었다. - 값을 바꿀 수 있다.
	//1. 중복처리를 한다
	//2. 1 + 한번에 사용된 곳을 관리한다
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	/*printf("%d * %d = %d\n", num1 + num2)
	printf("%d / %d = %d\n", num1 + num2)
	printf("%d / %d = %d\n", num1 + num2)
	printf("%d %% %d = %d\n", num1 + num2)*/

	return 0;
}