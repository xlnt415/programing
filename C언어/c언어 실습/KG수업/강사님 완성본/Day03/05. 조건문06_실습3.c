#include <stdio.h>

int main(void) {
	int num1; int num2; int num3;
	printf("���� 3�� �Է� >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	// 1. num1�� ���� ũ�� ������ ��� �� ���ΰ�?
	// 2. ���� ���� �����, ���� �ٸ� ����� ������ �� ��� �� ���ΰ�?
	if (num1 % num2 == 0) {
		printf("%d�� %d�� ����Դϴ�.\n", num1, num2);
	}
	else if (num1 % num3 == 0) {
		printf("%d�� %d�� ����Դϴ�.\n", num1, num3);
	}
	// num1�� ���ؼ� num2, num3 �Ѵ� ����� �ƴ� ���
	else {
		printf("%d�� ����� �����ϴ�.\n", num1);
	}
	return 0;
}