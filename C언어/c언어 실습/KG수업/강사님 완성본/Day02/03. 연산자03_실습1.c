#include <stdio.h>

int main(void) {
	// % : ���ڷ� ������ %% �ϸ� ���´�.

	// ������ �غ�Ǿ��� - ���� �ٲ� �� �ִ�.
	// 1. �ߺ�ó���� �Ѵ�
	// 2. 1 + �ѹ��� ���� ���� �����Ѵ�.
	// 3. �ش� ���� �ϰ��� �ٲ㼭 �����Ѵ�.
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