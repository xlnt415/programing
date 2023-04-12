#include <stdio.h>

int main(void) {
	// 실습3. 단순반복문제
	// -> 쓰기 익숙한 것을 이용한다
	int num = 1;
	while (num <= 10) {
		printf("HELLO!\n");
		// 유한반복에서는 대입연산형태로 조건식의 변수값을
		// 갱신한다.
		// 증감이 되도록 만들어야 한다.
		num++; // num+=1; // num = num + 1;
	}
	// 실습4. 규칙성문제
	// -> 규칙성을 제대로 찾으면, 반복횟수가 줄어든다.
	int num1 = 2;
	while (num1 <= 30) {
		printf("%d ", num1);
		num1+= 2;
	} printf("\n");

	return 0;
}