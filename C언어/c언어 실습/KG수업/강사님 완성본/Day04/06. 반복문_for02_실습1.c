#include <stdio.h>

int main(void) {
	// 변수를 만들까? 그냥 쓸까?
	int count;
	printf("출력할 횟수 입력 >> ");
	scanf_s("%d", &count);
	if (count <= 0) printf("안나옵니다.\n");
	else {
		// 변수 이름 중복은 피하는게 좋다.
		// - 같은 이름이면 외부의 변수를 못쓴다.
		// 만든다! - count는 건드리지 않는다.
		for (int i = 1; i <= count; i++) {
			printf("\"C Language is SIMPLE\"\n");
		}
		// 그냥 쓴다! - count를 건드려도 문제없다.
		for (;count>0 ;count--) {
			printf("\"C Language is SIMPLE\"\n");
		}
	}

	
	

	return 0;
}