#include <stdio.h>

int main(void) {
	// 프로그램 : 자료 -> 처리 -> 정보
	// 자료 : 상수 - 내가 미리 준비하는 것
	//       입력 - 자료를 실시간으로 사용자로부터 수집하는 것
	// 처리 : 연산자
	// 정보 : 처리된 결과 -> 출력
	/*
	int num1;
	int num2;
	int result;
	printf("첫번째 정수는? ");
	scanf_s("%d", &num1);
	printf("두번째 정수는? ");
	scanf_s("%d", &num2);
	result = num1 + num2;
	printf("결과 : %d\n", result);
	*/
	// %c
	char ch;
	printf("문자 입력 >> ");
	scanf_s("%c", &ch, 1); // 단일문자는 뒤에 1을 추가한다.
	printf("입력된 문자 : %c\n", ch);
	// %s
	char word[100];
	printf("단어 입력 >> ");
	scanf_s("%s", word, 100); // 문자열은 &를 안붙이고, 100을 추가한다.
	printf("입력된 문자열 : %s\n", word);
	// %d
	int num = 123;
	printf("정수 입력 >> ");
	scanf_s("%d", &num);
	printf("결과 : %d\n", num * 2);
	// %lf
	double fnum;
	printf("실수값 입력 >> ");
	scanf_s("%lf", &fnum); // 입력시에는 서식문자를 lf를 이용한다.
	printf("실수값 : %.2lf\n", fnum); // 햇갈리면 출력할 때도 lf 이용한다.
	/*
	// ※ 컴퓨터는 바보다
	printf("%p\n%p\n", &num, &fnum);
	// - 위치정보만으로는 변수의 종류를 식별할 수 없다...
	printf("%p\n", word);
	*/
	return 0;
}