#include <stdio.h>

int main(void) {
	//대입 : 저장. c언어에서는 연산식이다.
	int num;
	// 대입연산자 왼쪽 : 변수만 온다.
	num = 100; 
	// 대입연산자 오른쪽 : 변수와 상수가 올 수 있다.

	//waring : 온갖 곳에 넣을 수 있지만, 코드만 복잡해진다.
	/*printf("%d\n", num);
	printf("%d\n", num = 35);
	printf("%d\n", num);
	int result = 15 + (num = 3);
	printf("%d %d\n", result, num);*/

	return 0;
}