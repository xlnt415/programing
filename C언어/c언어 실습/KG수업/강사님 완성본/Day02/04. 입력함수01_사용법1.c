#include <stdio.h>

int main(void) {
	// ���α׷� : �ڷ� -> ó�� -> ����
	// �ڷ� : ��� - ���� �̸� �غ��ϴ� ��
	//       �Է� - �ڷḦ �ǽð����� ����ڷκ��� �����ϴ� ��
	// ó�� : ������
	// ���� : ó���� ��� -> ���
	/*
	int num1;
	int num2;
	int result;
	printf("ù��° ������? ");
	scanf_s("%d", &num1);
	printf("�ι�° ������? ");
	scanf_s("%d", &num2);
	result = num1 + num2;
	printf("��� : %d\n", result);
	*/
	// %c
	char ch;
	printf("���� �Է� >> ");
	scanf_s("%c", &ch, 1); // ���Ϲ��ڴ� �ڿ� 1�� �߰��Ѵ�.
	printf("�Էµ� ���� : %c\n", ch);
	// %s
	char word[100];
	printf("�ܾ� �Է� >> ");
	scanf_s("%s", word, 100); // ���ڿ��� &�� �Ⱥ��̰�, 100�� �߰��Ѵ�.
	printf("�Էµ� ���ڿ� : %s\n", word);
	// %d
	int num = 123;
	printf("���� �Է� >> ");
	scanf_s("%d", &num);
	printf("��� : %d\n", num * 2);
	// %lf
	double fnum;
	printf("�Ǽ��� �Է� >> ");
	scanf_s("%lf", &fnum); // �Է½ÿ��� ���Ĺ��ڸ� lf�� �̿��Ѵ�.
	printf("�Ǽ��� : %.2lf\n", fnum); // �ް����� ����� ���� lf �̿��Ѵ�.
	/*
	// �� ��ǻ�ʹ� �ٺ���
	printf("%p\n%p\n", &num, &fnum);
	// - ��ġ���������δ� ������ ������ �ĺ��� �� ����...
	printf("%p\n", word);
	*/
	return 0;
}