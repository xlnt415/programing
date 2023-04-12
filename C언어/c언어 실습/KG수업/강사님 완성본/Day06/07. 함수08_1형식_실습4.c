#include <stdio.h>

int function1(int num1, int num2) {
	// �߸��� ������ �� �� ������ ������ 0�� �־�θ� �����ϴ�.
	if (num2 == 0) return 0;
	else return num1 / num2;
}
int function2(int num1, int num2) {
	int result;
	// ������ ���ϴ� ���� 0�̰ų�, ������ ���� 0�̸� ���� ���ļ� 0���� ������.
	if (num1 == 0 || num2 == 0) result = 0;
	else if (num1 > num2) result = num1 / num2;
	else result = num2 / num1;
	return result;
}
int function3(int num1, int num2) {
	// �̷� �ܼ��� ������, �Լ��� ������ �ʴ´�.
	return num1 + num2;
	// ���� ��� ������ ����, �ڵ常 �� ����������.
}
int function4(int limit) {
	// �Լ��� �ᱹ �ݺ��Ǵ� �ڵ带 ó���ϴ� ��
	// -> return ��ɾ�� �ݺ����� breakó�� Ȱ��ȴ�.
	if (limit == 1) return 1;
	else {
		int result = 0;
		if (limit > 1) {
			for (int i = 1; i <= limit; i++) {
				result += i;
			}
		}
		else {
			for (int i = 1; i >= limit; i--) {
				result += i;
			}
		}
		return result;
	}
}

int main(void) {
	// �ǽ�4-1 : �� ������ �򿬻����� ����� �Լ��� �����ϼ���.
	printf("�� ������ �򿬻� ��� : %d\n", function1(10, 3)); // 3
	printf("�� ������ �򿬻� ��� : %d\n", function1(3, 10)); // 0

	// �ǽ�4-2 : �� ������ �� ū ���� ���Ͽ� �� ���� ���� ���� ����
	//           ����� �Լ��� �����ϼ���.
	printf("�� ū ���� ���� �򿬻� ��� : %d\n", function2(10, 3)); // 3
	printf("�� ū ���� ���� �򿬻� ��� : %d\n", function2(3, 10)); // 3

	// �ǽ�4-3 : �� ������ ���� ����� �Լ��� �����ϼ���.
	printf("�� ������ �տ��� ��� : %d\n", function3(10, 3)); // 13
	printf("�� ������ �տ��� ��� : %d\n", function3(3, 10)); // 13

	// �ǽ�4-4 : 1���� ������ ���������� ���� ����� �Լ��� �����ϼ���.
	printf("10������ �� : %d\n", function4(10)); // 55
	printf("-5������ �� : %d\n", function4(-5)); // -14

	return 0;
}