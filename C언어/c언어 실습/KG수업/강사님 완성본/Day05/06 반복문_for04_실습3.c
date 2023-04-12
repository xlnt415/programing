#include <stdio.h>

int main(void) {
	// 코드는 소설쓰는 과정이다.
	// 1. 입력은 나중에 추가하면 그만이다.
	// 2. 반복문에서 변수와 상수는 서로 다른 것이다.
	// 3. 각 값을 건드렸을 때 무엇이 변해서 어디에 반영되나?
	// 4. 변수 줄이는 것은, 반복부터 만들고 나서 줄인다.
	
	int value1;
	int value2;
	printf("단, 범위 입력 >> ");
	scanf_s("%d%d", &value1, &value2);
	// 입력받고, 무한반복으로 재입력받는다 -> 틀린 것 아님.
	// 하나씩 받는다 -> 하나를 제대로 입력받아야 된다.
	// 여러개를 동시에 받는다 -> 잘못된 것만 재입력받는다.
	while (value1 < 1 || value1 > 9) {
		printf("단 잘못 입력했습니다.\n재입력 >> ");
		scanf_s("%d", &value1);
	}
	while (value2 < 1 || value2 > 9) {
		printf("범위 잘못 입력했습니다.\n재입력 >> ");
		scanf_s("%d", &value2);
	}
	// for문은 while의 문법상 재배치결과물이다.
	// 구성요소를 전부 배치했다면, 정해진 만큼만 반복된다!
	for (int num1 = 1; num1 <= value2; num1++) {
		printf("%d x %d = %d\n", value1, num1, value1 * num1);
	}
	return 0;
}