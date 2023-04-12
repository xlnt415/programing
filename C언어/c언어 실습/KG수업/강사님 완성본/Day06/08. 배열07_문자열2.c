#include <stdio.h>
#include <string.h> // ���ڿ��� ���õ� �Լ��� ����ִ� �������

int main(void) {
	// ���ڿ��� ��? - �ε����� �����ϴ� ���ں����� 1��1��
	char word1[] = "Apple";
	char word2[] = "Apple";
	// printf("%d\n", word1 == word2); �����񱳶� �ȵȴ�.
	// 1��1 ���ϸ� �Ǵµ�, ����/�� ����� �̿��� �ʹ� ��ƴ�...
	for (int i = 0; ; i++) {
		if (word1[i] != word2[i]) {
			printf("�� ���� ���� �ʽ��ϴ�....\n");
			break;
		}
		if (word1[i] == '\0' || word2[i] == '\0') {
			printf("���� �������Ƚ��ϴ�..\n");
			break;
		}
	}
	// -> strcmp() �Լ��� �̿��Ѵ�.
	printf("%d\n", strcmp(word1, word2));
	printf("%d\n", strcmp(word2, word1));
	// �Լ� ��ü�� ���ǽ����� �̿��ϸ� �ȴ�.
	// 0�̸� ��ġ / 0 �̿��� ���� ����ġ

	// ���ڿ��� ����? - �ε����� �����ϴ� ���ں����� 1��1����
	// +@ : ������ڿ��� ������ڹ迭�̴�.
	char word3[15];
	/*
	for (int i = 0;; i++) {
		word3[i] = "Apple"[i];
		if ("Apple"[i] == '\0') break;
	}
	*/
	// ��������...strcpy_s �� �̿��Ѵ�.
	strcpy_s(word3, sizeof(word3), "ThisIsSparta!");
	// - ����� ������ ũ�⸦ �䱸�Ѵ�.
	// - �����ؿ� ����� ��������� ũ��� ����� ������ ũ�⺸�� ũ�� �ȵ�
	printf("����� ���ڿ� : %s\n", word3);
	return 0;
}