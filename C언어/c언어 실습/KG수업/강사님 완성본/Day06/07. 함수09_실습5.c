#include <stdio.h>

char upper(char ch) {
	if (ch >= 'a' && ch <= 'z') ch -= 32;
	return ch;
}
double get_avg(int count) {
	double avg = 0;
	int tmp;
	printf("%d���� �� >> ", count);
	for (int i = 1; i <= count; i++) {
		scanf_s("%d", &tmp);
		avg += tmp;
	}
	return avg / 5;
}

int main(void) {
	// ����1�� ���࿹���ڵ�
	// �ҹ��� : 97(a) ~ 122(z), �빮�� : 65(A) ~ 90(Z)
	// �� ���̴� 32�̰�, �ش� ������ ���� �����Դϴ�.
	printf("�ȹٲ� �� : %c\n", upper('A')); // A
	printf("�ٲ� �� : %c\n", upper('a')); // A
	printf("�� �ٲ� �� : %c\n", upper('!')); // !

	// ����2�� ���࿹���ڵ�
	double avg = get_avg(5);
	printf("5�� �Է��� �޾� ������\n�������� ��� : %.2f\n", avg);
	return 0;
}