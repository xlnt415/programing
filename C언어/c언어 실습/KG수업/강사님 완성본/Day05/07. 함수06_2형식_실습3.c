#include <stdio.h>

// �Ű��������� �ݵ�� �ڷ��� �����ؾ� �Ѵ�.
// �� : �Ϲ����� ó���� ���� �ʴ�.
void show_big(int num1, int num2) {
	if (num1 > num2) printf("�� ū �� : %d\n", num1);
	else if (num1 < num2) printf("�� ū �� : %d\n", num2);
	else printf("���� ����\n");
}
// ���밪�� ��ȯ�ϵ��� �������...
// -> abs()�Լ��� �ȴ�. math.h ��� ������Ͽ� �������.
void show_abs(int value) {
	if (value < 0) value = -value;
	printf("���밪 : %d\n", value);
}
void show_result(void) {}

int main(void) {
	// �ǽ�1. ������ �� ���� �� �� ū ���� ����ϴ� �Լ��� �����ϼ���.
	//       ���� ������ <���� ����> �� ����մϴ�.
	show_big(10, 3); // �� ū �� : 10
	show_big(3, 10); // �� ū �� : 10
	show_big(5, 5);  // ���� ����
	
	// �ǽ�2. ������ ������ ���밪�� ����ϴ� �Լ��� �����ϼ���.
	show_abs(-8); // ���밪 : 8
	show_abs(8);  // ���밪 : 8
	
	// �ǽ�3. ������ �� ������ �� / ������ / ������(�Ҽ���2�ڸ�) �����
	//       ����ϴ� �Լ��� �����ϼ���.
	//show_result(4, 3); // 1, 1, 1.33
	//show_result(3, 4); // 0, 3, 0.75
	// show_result(?, ?); // ���� �� �����ϴ�.
	return 0;
}