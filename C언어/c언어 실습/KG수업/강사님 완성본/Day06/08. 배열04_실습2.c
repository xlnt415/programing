#include <stdio.h>

int main(void) {
	// �迭�� ũ��� �ݵ�� ����� �����ȴ�.
	double arr[5]; // ���� �ʱ�ȭ�� ���, ���� ������ �����Ѵ�.
	int size = sizeof(arr) / sizeof(double);
	printf("�迭�� ũ�� : %d\n", size);
	printf("�迭�� ����ũ�� : %d Bytes\n", sizeof(arr));
	printf("�迭�� �ڷ��� ũ�� : %d Bytes\n", sizeof(double));
	arr[1] = 1.1;
	arr[2] = 2.2;
	arr[3] = 3.3;
	printf("ù��°�� ������ �� �Է� >> ");
	scanf_s("%lf%lf", &arr[0], &arr[4]);
	// �ε����� ��� ������ ���� �ݵ�� ����� �Ѵ�.
	for (int i = 0; i < size; i++) {
		printf("arr[%d] : %.1f\n", i, arr[i]);
	}
	return 0;
}