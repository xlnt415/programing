#include <stdio.h>
int input_data(void) {
	int num;
	printf("���� �ϳ� �Է� >> ");
	scanf_s("%d", &num);
	return num;
}
int make_sum(int num) {
	int result = 0;
	while (num > 0) {
		result += num;
		num--;
	}
	return result;
}
void show_result(int result) {
	printf("��� : %d\n", result);
}

int main(void) {
	// 4���� : ���α׷� �� ��ü
	// 3���� : �ڷ�
	// 2���� : ����
	// 1���� : ó��
	// -> �ڵ带 �뵵���� �����ؼ� ������
	//   �ش� ������ �״�� ������ ����
	//   ���� �帧�� �ľ��Ͽ� �Ű�����/return��
	//   �߰��ϸ� �۵��Ѵ�!
	int num = input_data();
	int result = make_sum(num);
	show_result(result);
	return 0;
}