#include <stdio.h>

int main(void) {
	int num1;
	int num2;

	num1 = 1717;
	num2 = 19;
	//������ �غ�Ǿ���. - ���� �ٲ� �� �ִ�.
	//1. �ߺ�ó���� �Ѵ�
	//2. 1 + �ѹ��� ���� ���� �����Ѵ�
	printf("%d + %d = %d\n", num1, num2, num1 + num2);
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	/*printf("%d * %d = %d\n", num1 + num2)
	printf("%d / %d = %d\n", num1 + num2)
	printf("%d / %d = %d\n", num1 + num2)
	printf("%d %% %d = %d\n", num1 + num2)*/

	return 0;
}