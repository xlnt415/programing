#include <stdio.h>

int main(void) {
	// ���߹ݺ� : �ݺ��� �ѹ� ��ø�� ��
	for (int y = 1; y <= 21; y += 5) {
		for (int x = y; x <= y + 4; x++) {
			printf("%2d ", x);
		} printf("\n");
	}
	// �ݺ�Ƚ���� �����ؼ� ó���� �� �ִ�.
	int num = 1;
	for (int y = 1; y <= 5; y++) {
		for (int x = 1; x <= 5; x++) {
			printf("%2d ", num);
			num++;
		} printf("\n");
	}
	return 0;
}