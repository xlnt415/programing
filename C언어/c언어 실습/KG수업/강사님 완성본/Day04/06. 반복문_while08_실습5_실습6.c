#include <stdio.h>

int main(void) {
	// �ǽ�5. ������ ������ ���� �ٲ�� �� �ʿ� ����
	//       ������� ��, ����� �ߺ�ó����� ���̴�.
	int num = 0; int num1;
	while (num <= 0) {
		printf("����� ��� �Է� >> ");
		scanf_s("%d", &num);
	}
	num1 = num;
	while (num1 <= 30) {
		printf("%d ", num1);
		num1 += num;
	} printf("\n");
	// �ǽ�6. ���ǹ� �� �� �ִ�.
	int limit;
	int num2 = 1;
	printf("���� �Է� >> ");
	scanf_s("%d", &limit);
	if (limit < 1) printf("�Ⱥ����ݴϴ�.\n");
	else {
		while (num2 <= limit) {
			printf("%d ", num2);
			num2++;
		}
	}
	
	return 0;
}