#include <stdio.h>

int main(void) {
	// ��������� �ߴ� â�� ������ yesó���ϰ� ���ָ� �ǰ�������.
	// ���� -> �ɼ� -> ������Ʈ �� �ַ�� -> ���� �� ����
	// - �����߻��� ��¼��.... - �׻󹯱�� �����ϸ� ��Ƴ���.
	int num1; int num2;
	int result;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2) {
		// int result; // ��������
		// -> �������� ����� ������ �����ȴ�.
		printf("ù��°�� �� Ů�ϴ�.\n");
		printf("2�� ");
		result = num1 * 2;
	}
	else {
		printf("�ι�°�� �� Ů�ϴ�.\n");
		printf("3�� ");
		result = num2 * 3;
	}
	printf ("���� ��� : %d\n", result);
	return 0;
}