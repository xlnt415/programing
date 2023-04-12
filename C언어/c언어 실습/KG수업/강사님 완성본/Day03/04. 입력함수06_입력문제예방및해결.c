#include <stdio.h>

int main(void) {
	int num1; int num2;
	char ch1; char ch2;
	// 1. 예방방법
	// 1) 서식문자를 섞어서 입력받지 않는다.
	printf("정수2개, 실수2개 입력 >> ");
	// scanf_s("%d%d%c%c", &num1, &num2, &ch1, 1, &ch2, 1);
	// 안됨
	scanf_s("%d%d", &num1, &num2);		// 올바른 작성방식
	// 2) 문자를 입력받을 경우, 앞에 띄어쓰기 한칸을 넣어준다.
	// scanf_s("%c%c", &ch1, 1, &ch2, 1);
	// 안됨
	scanf_s(" %c %c", &ch1, 1, &ch2, 1);
	printf("결과 : %d %d %c %c\n", num1, num2, ch1, ch2);

	// 2. 해결방법
	// rewind(stdin) // VS2015버전 이후에 가능
	// fflush(stdin) // 이전버전 또는 다른 환경
	rewind(stdin); // 임시공간에 저장된 것들을 모두 제거
	char word[100];
	printf("문장 입력 >> ");
	gets_s(word, 100); // gets(word); // 원본
	printf("결과 : %s\n", word);
	
	return 0;
}