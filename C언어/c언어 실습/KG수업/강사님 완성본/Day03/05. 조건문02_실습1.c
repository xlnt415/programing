#include <stdio.h>

int main(void) {
	int num;
	printf("���� �Է� >> ");
	scanf_s("%d", &num);
	// if �ܵ������, if ���ǹ� �� ���ӹ��� ��� �ڵ尡 �����ؾ� �Ѵ�.
	if (num % 2 == 0) {
		printf("2�� ����Դϴ�.\n");
	}
	if (num % 7 == 0) {
		printf("7�� ����Դϴ�.\n");
	}
	if (num < 15) {
		printf("15 �̸��Դϴ�.\n");
	}
	if (num > 15) {
		printf("15 �ʰ��Դϴ�.\n");
	}
	printf("�Էµ� ���� : %d\n", num);
	return 0;
}