#include <stdio.h>

int main(void) {
	// ���߹ݺ� ������ ���Ϲݺ��� ������ ������.
	// �ݺ� �ڵ� �ۼ�/����� ������ �ȵȴ�.
	// - ������ ���ϳ�?
	// - �󸶸�ŭ ���ϳ�?
	// - ��� ���ϳ�?
	// - ���� ���� ��� ���ǳ�?
	int size;
	printf("��� �ܼ� >> "); scanf_s("%d", &size);
	for (int y = 1; y <= size; y++) {
		for (int x = 1; x <= y; x++) {
			printf("��");
		}
		printf("\n");
	}
	// ���� �ݺ����δ� ���Ѵ�...�ʹ� ��ƴ�...
	int count = 0;
	for (int i = 1; i <= size; i++) {
		count += i;
	}
	int count1 = 0;
	int limit = 1;
	for (int i = 1; i <= count; i++) {
		printf("��");
		count1++;
		if (count1 == limit) {
			count1 = 0;
			limit++;
			printf("\n");
		}
	}
	return 0;
}