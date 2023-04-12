#include <stdio.h>

int main(void) {
	int num1;
	int num2;
	char ch;
	// 입력된 문자들을 훓어보며, 서식문자형식과 일치하는지 점검하고
	// 이를 해당 값으로 변환시켜 저장시켜주는 구조
	printf("정수1 입력 >> "); // |'1'|'0'|' '|'2'|'0'|'\n'|
	scanf_s("%d", &num1);    // |'1'|'0'| 읽고 나머지는 남김
	printf("정수2 입력 >> "); // |' '|'2'|'0'|'\n'|
	scanf_s("%d", &num2);	 // |' '| 버림처리, |'2'|'0'| 읽음
	printf("문자 입력 >> ");
	scanf_s("%c", &ch, 1);
	printf("\n합 : %d\n", num1 + num2); // |'\n'|
	printf("->%c<-\n", ch);
	// 1. 입력함수의 종류가 바뀌면, 규칙이 달라서
	//    입력이 안될 수 있다.
	//    scanf_s vs gets_s
	// 2. 서식문자가 달라지면, 입력이 안될 수 있다.
	//    %d %s %lf vs %c
	return 0;
}