#include <stdio.h>

int main(void) {
	// % : 문자로 쓸려면 %% 하면 나온다.

	// 변수가 준비되었다 - 값을 바꿀 수 있다.
	// 1. 중복처리를 한다
	// 2. 1 + 한번에 사용된 곳을 관리한다.
	// 3. 해당 값을 일괄로 바꿔서 적용한다.
	int num1 = 1717;
	int num2 = 19;
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d * %d = %d\n", num1, num2, num1 * num2);
	printf("%d / %d = %d\n", num1, num2, num1 / num2);
	printf("%d / %d = %.2f\n", num1, num2, num1 / (double)num2);
	printf("%d %% %d = %d\n", num1, num2, num1 % num2);
	return 0;
}