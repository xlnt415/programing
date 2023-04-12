#include <stdio.h>

// 매개변수에는 반드시 자료형 설정해야 한다.
// 팁 : 암묵적인 처리는 좋지 않다.
void show_big(int num1, int num2) {
	if (num1 > num2) printf("더 큰 수 : %d\n", num1);
	else if (num1 < num2) printf("더 큰 수 : %d\n", num2);
	else printf("서로 같다\n");
}
// 절대값을 반환하도록 만들었다...
// -> abs()함수가 된다. math.h 라는 헤더파일에 들어있음.
void show_abs(int value) {
	if (value < 0) value = -value;
	printf("절대값 : %d\n", value);
}
void show_result(void) {}

int main(void) {
	// 실습1. 임의의 두 정수 중 더 큰 수를 출력하는 함수를 정의하세요.
	//       서로 같으면 <서로 같다> 고 출력합니다.
	show_big(10, 3); // 더 큰 수 : 10
	show_big(3, 10); // 더 큰 수 : 10
	show_big(5, 5);  // 서로 같다
	
	// 실습2. 임의의 정수의 절대값을 출력하는 함수를 정의하세요.
	show_abs(-8); // 절대값 : 8
	show_abs(8);  // 절대값 : 8
	
	// 실습3. 임의의 두 정수의 몫 / 나머지 / 나눗셈(소수점2자리) 결과를
	//       출력하는 함수를 정의하세요.
	//show_result(4, 3); // 1, 1, 1.33
	//show_result(3, 4); // 0, 3, 0.75
	// show_result(?, ?); // 나눌 수 없습니다.
	return 0;
}