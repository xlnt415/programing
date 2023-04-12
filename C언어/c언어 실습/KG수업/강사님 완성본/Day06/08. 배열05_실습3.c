#include <stdio.h>

int main(void) {
	int values[4];
	int result = 0;
	// 주의사항1 : 배열의 크기값을 구해서 변수에 저장한다.
	// -> 배열의 크기값만 바꿔도 모든 코드가 연동되도록 도와준다.
	int size = sizeof(values) / sizeof(int); // sizeof(배열)/sizeof(그자료형);
	for (int i = 0; i < size; i++) {
		printf("정수%d 입력 >> ", i + 1);
		scanf_s("%d", &values[i]);
	}
	// 주의사항2 : 서로 다른 목적의 코드는 하나의 반복으로 합치지 않는다.
	// -> 함수를 만들려고 할 때, 알아보기 힘들어진다.
	// -> 만든 코드를 유지보수할 때 힘들다 -> 문제점 파악이 어렵다.
	// -> 효율성은 1도 없음
	// 1 * 5 * 2 vs 2 * 5 -> 10 vs 10
	for (int i = 0; i < size; i++) {
		result += values[i];
	}
	printf("합 : %d\n", result);
	if (result % 5 == 0) printf("5의 배수입니다.\n");
	return 0;
}