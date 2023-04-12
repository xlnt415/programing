#include <stdio.h>

int main(void) {
	char ch;
	char word[100];
	int num;
	double fnum;
	// 필요할 경우, 서식문자를 한번에 배치할 수 있다.
	printf("문자, 문자열, 정수, 실수 입력해주세요\n>> ");
	// 값끼리는 띄어쓰기/엔터로 구분하여 입력을 한다.
	scanf_s("%c%s%d%lf", &ch, 1, word, 100, &num, &fnum);
	// 문자열 입력시, 규칙으로 인해서 단어단위 밖에 안된다.
	printf("\n%c %s %d %f\n", ch, word, num, fnum);
	return 0;
}