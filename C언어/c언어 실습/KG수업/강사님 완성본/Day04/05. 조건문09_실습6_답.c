#include <stdio.h>

int main(void) {
	// ���ǹ� : ����� �� �ο�
	// - �������� �ڵ��� ����
	// �� ���� �� ���� ���� Ů�ϱ�?
	int num1; int num2; int num3;
	printf("�ִ밪 �Ǻ���\n���� 3�� �Է� >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	// 1. ���� ū �Ÿ� ã�´� - ������ 2���� ������ �� �������
	if (num1 >= num2 && num1 > num3) {
		printf("���� ū ���� %d�Դϴ�.\n", num1);
	}
	else if (num2 > num1 && num2 >= num3) {
		printf("���� ū ���� %d�Դϴ�.\n", num2);
	}
	else {
		printf("���� ū ���� %d�Դϴ�.\n", num3);
	}
	// 2. ū ���� ������ �װɷ� �ٲ۴�.
	int result = num1;
	if (result < num2) result = num2;
	if (result < num3) result = num3;
	printf("%d�� ���� Ů�ϴ�.\n", result);
	return 0;
}