#include <stdio.h>

int main(void) {
	int num1; int num2;
	char ch1; char ch2;
	// 1. ������
	// 1) ���Ĺ��ڸ� ��� �Է¹��� �ʴ´�.
	printf("����2��, �Ǽ�2�� �Է� >> ");
	// scanf_s("%d%d%c%c", &num1, &num2, &ch1, 1, &ch2, 1);
	// �ȵ�
	scanf_s("%d%d", &num1, &num2);		// �ùٸ� �ۼ����
	// 2) ���ڸ� �Է¹��� ���, �տ� ���� ��ĭ�� �־��ش�.
	// scanf_s("%c%c", &ch1, 1, &ch2, 1);
	// �ȵ�
	scanf_s(" %c %c", &ch1, 1, &ch2, 1);
	printf("��� : %d %d %c %c\n", num1, num2, ch1, ch2);

	// 2. �ذ���
	// rewind(stdin) // VS2015���� ���Ŀ� ����
	// fflush(stdin) // �������� �Ǵ� �ٸ� ȯ��
	rewind(stdin); // �ӽð����� ����� �͵��� ��� ����
	char word[100];
	printf("���� �Է� >> ");
	gets_s(word, 100); // gets(word); // ����
	printf("��� : %s\n", word);
	
	return 0;
}