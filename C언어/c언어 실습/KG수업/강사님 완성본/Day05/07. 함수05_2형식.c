#include <stdio.h>
// 함수의 매개변수 : 함수 외부로부터 값을 복사받아 초기화되는 변수
// 매개변수는 함수가 호출될 때 넣어준 값이 있으면 이를 이용해 초기화된다.
// 이 변수들은 외부에서 못쓴다.
void show_avg(int n1, int n2, int n3) {
	// 변수는 선언된 곳에 종속된다. 가져올 수 없음.
	// -> 값은 복사할 수 있다!
	// int n1 = 10; 값만 외부에서 받을 뿐, 내부에 만들어진 변수이다.
	printf("평균 : %.2f\n", (n1 + (double)n2 + n3) / 3);
}
// 2형식 : 외부로부터 값을 전달받아 보여주기만 하는 함수
// + return이 의미가 없을 때 등장하는 형태.

int main(void) {
	// 매개변수가 설정되면, 값을 괄호안에 넣어준다.
	// -> 전달인자(Arguments)라는 정식명칭이 있지만, 값이라 부른다.
	int num1 = 10;
	// -> 특정 변수를 불러오는 작업이 아님.
	// main의 num1과 함수의 num1은 동명이인관계이다.
	show_avg(num1, 5, 4);
	return 0;
}