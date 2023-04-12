#include <stdio.h>

int main(void) {
	// Simple is BEST

	// 시스템 개발 : 하드웨어와 이를 이용하는 사용자가
	//              서로 소통할 수 있도록 하는 분야
	// 숫자를 준비할 때, 0부터 시작하면, 8진수로 해석한다.
	// +@ : 0x 로 시작하면 16진수로 해석한다.
	// 문제1
	printf("010-1234-5678\n");
	// 문제2
	// 문자열 변수 준비절차
	// char 변수명[100]="필요한 문자열값";
	char name[100] = "홍길동";
	char dream[100] = "프로그래머!";
	printf("%s 35 %s\n", name, dream);
	return 0;
}