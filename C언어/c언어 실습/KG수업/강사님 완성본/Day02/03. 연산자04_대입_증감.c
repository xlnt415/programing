#include <stdio.h>

int main(void) {
	// 대입 : 저장. C언어에서는 연산식이다.
	int num;
	// 대입연산자 왼쪽 : 변수만 온다.
	// 대입연산자 오른쪽 : 변수와 상수가 올 수 있다.
	num = 100;
	printf("%d\n", num);
	// 주의 : 온갖 곳에 넣을 수 있지만, 코드만 복잡해진다.
	/*
	printf("%d\n", num);
	printf("%d\n", num = 35);
	printf("%d\n", num);
	int result = 15 + (num = 3);
	printf("%d %d\n", result, num);
	*/
	// 우선순위가 바닥이다 - 항상 오른쪽부터 먼저 연산한다.
	num = num + 3;
	printf("%d\n", num);
	
	// 복합대입 : 위 연산을 줄인 것. 변수 초기화용도는 불가
	num += 3;
	printf("%d\n", num);
	// 대입 : 저장/교체, 복합대입 : 누적

	// 증감연산자 : 복합대입에서, 1씩 증가/감소하는 연산을 더 줄인 것
	num += 1;
	printf("%d\n", num);
	num++; // 후치
	printf("%d\n", num);
	++num; // 전치
	printf("%d\n", num);
	// 단독사용시에는 두 방식은 차이가 없음
	return 0;
}