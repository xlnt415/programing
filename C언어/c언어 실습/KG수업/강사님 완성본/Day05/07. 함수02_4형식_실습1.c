#include <stdio.h>
// �Լ� ���ǽ� ���ǻ��� : main ���ο��� ���� �� ����
// - main �Լ��ʹ� ������ ��������� ����Ǿ� ������ ��������� �̿��Ѵ�.
//  ��, ����Ǵ� ��ġ�� �ٸ����� ���� ��ü�� ������ ���̴�.
void program1(void) {
	int num1; int num2; int num3;
	printf("3���� ���� �Է� >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("��� : %.2f\n", (num1 + (double)num2 + num3) / 3);
}
// �Լ������� �������� �ߺ��Ǿ ������ġ�� �ٸ��� ������
// �ƹ��� �������
void program2(void) {
	int num1 = 0;
	while (num1 <= 0) {
		printf("���� ���� �Է� >> ");
		scanf_s("%d", &num1);
	}
	for (int i = 1; i <= num1; i++) {
		printf("%d ", i);
	} printf("\n");
}

int main(void) {
	// �ǽ�1-1
	// �Է��� �� ������ ����� ����ϴ� �Լ� program1��
	// �����ϰ�, ȣ���Ͽ� ����ϼ���.
	program1();

	// �ǽ�1-2
	// 1���� �Է��� ���� �������� 1�� �����ϴ� ��������
	// ����ϴ� �Լ� program2�� �����ϰ�, ȣ���Ͽ� ����ϼ���.
	program2();
	return 0;
}