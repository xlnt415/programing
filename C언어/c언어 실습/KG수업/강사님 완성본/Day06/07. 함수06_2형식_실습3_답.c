#include <stdio.h>
// 4���� : ������ ���α׷�. �����Ұ�.
void program(void) {
	int num1; int num2;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &num1, &num2);
	printf("��� : %d %d %.2f\n", num1 / num2, num1 % num2, num1 / (double)num2);
}
// 3���� : ������� �ܺη� �����ִ� �Լ�.
int make_result(void) {
	int num1; int num2;
	printf("���� 2�� �Է� >> ");
	scanf_s("%d%d", &num1, &num2);
	// �Լ��� return�� �ϳ��� �� �� �ִ�. ������ ����.
	return num1 / num2;
	// �ٸ� ����� �ʿ��ϸ�, �Լ��� 3�� �غ��ؼ� ��� ��....
}
// 2���� : ���� �ܺηκ��� �޾ƿͼ� ����ϴ� �Լ�
void show_result(int num1, int num2) {
	if (num2 == 0) printf("���� �� �����ϴ�.\n");
	else  printf("��� : %d %d %.2f\n",
		num1 / num2, num1 % num2, num1 / (double)num2);
}

int main(void) {
	program();
	printf("�޾ƿ� �� ���� ��� : %d\n", make_result());
	show_result(10, 0);
	return 0;
}