#include <stdio.h>

int main(void) {
	// 빌드오류시 뜨는 창은 무조건 yes처리하고 없애면 피곤해진다.
	// 도구 -> 옵션 -> 프로젝트 및 솔루션 -> 빌드 및 실행
	// - 에러발생시 어쩌구.... - 항상묻기로 설정하면 살아난다.
	int num1; int num2;
	int result;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2) {
		// int result; // 지역변수
		// -> 사용범위가 선언된 곳으로 한정된다.
		printf("첫번째가 더 큽니다.\n");
		printf("2를 ");
		result = num1 * 2;
	}
	else {
		printf("두번째가 더 큽니다.\n");
		printf("3을 ");
		result = num2 * 3;
	}
	printf ("곱한 결과 : %d\n", result);
	return 0;
}