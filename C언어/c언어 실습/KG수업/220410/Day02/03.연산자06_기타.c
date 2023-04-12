#include <stdio.h>

int main(void) {
	//1. 콤마(쉼표)
	// - 코드를 연결시키고 싶을 때 사용
	// - 연산식을 연결했다면 가장 오른쪽이 결과로 준비된다
	/*printf("A\n");
	printf("B\n");*/
	
	int num = 15;
	int result = 0;
	printf("%d %d\n", result, num);
	result = (num += 5, num + 13); //그닥 권장하지는 않음
	printf("%d %d\n", result, num);

	//2. sizeof() : 저장공간/자료형의 크기를 구해주는 연산자
	printf("변수의 크기 : %d\n", sizeof(num));
	printf("자료형의 크기 : %d\n", sizeof(double));
	return 0;
}