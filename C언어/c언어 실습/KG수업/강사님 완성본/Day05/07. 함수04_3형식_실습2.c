#include <stdio.h>
// 함수 내에서 변수 사용시 변수명 팁
// - 1) 되도록 중립적인 변수명을 쓴다.
// - 2) 나중에 헷갈리면 변수명이 중첩되지 않게 구분한다.
int input_int(void) {
	int value; // C언어를 사용할 경우의 scanf_s의 사용방식
	printf("정수 입력 >> ");
	scanf_s("%d", &value);
	return value;
}
double input_double(void) {
	double value;
	printf("실수 입력 >> ");
	scanf_s("%lf", &value);
	return value;
}

// 우리가 만든 함수는, 다른 만들어낸 함수에서 쓸 수 있음
int get_sum(void) {
	int result = 0;
	int limit = input_int();
	// 필요할 경우, return을 if else로 선택적으로 실행되도록 한다.
	if (limit < 1) {
		return result;
	}
	else {
		for (int i = 1; i <= limit; i++) {
			result += i;
		}
		return result;
	}
}

int main(void) {
	// 실습1-1
	// 정수값 하나를 입력을 받고, 입력을 받은 값을
	// 외부에서 쓸 수 있도록 하는 함수를 정의하세요.
	int value1 = input_int();
	printf("복사하여 받아온 값 : %d\n", value1);
	// 실습1-2
	// 실수값 하나를 입력을 받고, 입력을 받은 값을
	// 외부에서 쓸 수 있도록 하는 함수를 정의하세요.
	double value2 = input_double();
	printf("복사하여 받아온 값 : %.2f\n", value2);
	// 실습2
	// 1부터 내가 입력한 정수까지의 합을 외부에서 쓸 수 있도록
	// 준비하는 함수를 정의하세요.
	// 단, 1미만의 값을 입력하면 0이 나옵니다.
	int result = get_sum();
	printf("입력한 정수까지의 합 : %d\n", result); // 5면 15, -5면 0
	return 0;
}