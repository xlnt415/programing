#include <stdio.h>
// �Լ� ������ ���� ���� ������ ��
// - 1) �ǵ��� �߸����� �������� ����.
// - 2) ���߿� �򰥸��� �������� ��ø���� �ʰ� �����Ѵ�.
int input_int(void) {
	int value; // C�� ����� ����� scanf_s�� �����
	printf("���� �Է� >> ");
	scanf_s("%d", &value);
	return value;
}
double input_double(void) {
	double value;
	printf("�Ǽ� �Է� >> ");
	scanf_s("%lf", &value);
	return value;
}

// �츮�� ���� �Լ���, �ٸ� ���� �Լ����� �� �� ����
int get_sum(void) {
	int result = 0;
	int limit = input_int();
	// �ʿ��� ���, return�� if else�� ���������� ����ǵ��� �Ѵ�.
	if (limit < 1) {
		return result;
	}
	else {
		for (int i = 1; i <= limit; i++) {
			result += i;
		}
		return result;
	}
}

int main(void) {
	// �ǽ�1-1
	// ������ �ϳ��� �Է��� �ް�, �Է��� ���� ����
	// �ܺο��� �� �� �ֵ��� �ϴ� �Լ��� �����ϼ���.
	int value1 = input_int();
	printf("�����Ͽ� �޾ƿ� �� : %d\n", value1);
	// �ǽ�1-2
	// �Ǽ��� �ϳ��� �Է��� �ް�, �Է��� ���� ����
	// �ܺο��� �� �� �ֵ��� �ϴ� �Լ��� �����ϼ���.
	double value2 = input_double();
	printf("�����Ͽ� �޾ƿ� �� : %.2f\n", value2);
	// �ǽ�2
	// 1���� ���� �Է��� ���������� ���� �ܺο��� �� �� �ֵ���
	// �غ��ϴ� �Լ��� �����ϼ���.
	// ��, 1�̸��� ���� �Է��ϸ� 0�� ���ɴϴ�.
	int result = get_sum();
	printf("�Է��� ���������� �� : %d\n", result); // 5�� 15, -5�� 0
	return 0;
}