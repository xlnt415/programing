#include <stdio.h>

int main(void) {
	char ch;
	char word[100];
	int num;
	double fnum;
	// �ʿ��� ���, ���Ĺ��ڸ� �ѹ��� ��ġ�� �� �ִ�.
	printf("����, ���ڿ�, ����, �Ǽ� �Է����ּ���\n>> ");
	// �������� ����/���ͷ� �����Ͽ� �Է��� �Ѵ�.
	scanf_s("%c%s%d%lf", &ch, 1, word, 100, &num, &fnum);
	// ���ڿ� �Է½�, ��Ģ���� ���ؼ� �ܾ���� �ۿ� �ȵȴ�.
	printf("\n%c %s %d %f\n", ch, word, num, fnum);
	return 0;
}