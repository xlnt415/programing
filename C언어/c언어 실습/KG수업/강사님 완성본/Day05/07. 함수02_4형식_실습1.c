#include <stdio.h>
// 함수 정의시 주의사항 : main 내부에서 만들 수 없음
// - main 함수와는 별개의 저장공간에 저장되어 별개의 저장공간을 이용한다.
//  단, 저장되는 위치는 다르지만 영역 자체는 동일한 곳이다.
void program1(void) {
	int num1; int num2; int num3;
	printf("3개의 정수 입력 >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("평균 : %.2f\n", (num1 + (double)num2 + num3) / 3);
}
// 함수끼리는 변수명이 중복되어도 생성위치가 다르기 때문에
// 아무런 상관없음
void program2(void) {
	int num1 = 0;
	while (num1 <= 0) {
		printf("양의 정수 입력 >> ");
		scanf_s("%d", &num1);
	}
	for (int i = 1; i <= num1; i++) {
		printf("%d ", i);
	} printf("\n");
}

int main(void) {
	// 실습1-1
	// 입력한 세 정수의 평균을 출력하는 함수 program1을
	// 정의하고, 호출하여 사용하세요.
	program1();

	// 실습1-2
	// 1부터 입력한 양의 정수까지 1씩 증가하는 정수들을
	// 출력하는 함수 program2를 정의하고, 호출하여 사용하세요.
	program2();
	return 0;
}