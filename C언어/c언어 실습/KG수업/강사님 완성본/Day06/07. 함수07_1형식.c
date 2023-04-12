#include <stdio.h>

double make_avg(int n1, int n2, int n3) {
	return (n1 + (double)n2 + n3) / 3;
}
// 1형식 : 값을 처리하는 것에만 집중되는 함수

int main(void) {
	// 4형식 : 독립프로그램 - 자료 -> 처리 -> 정보
	// 3형식 : 정보단계가 없음 - 자료 -> 처리 -> 넘긴다
	// 2형식 : 자료단계가 없음 - 받아온 것 -> 처리 -> 정보
	// 1형식 : 처리(연산)만 수행 - 받아온 것 -> 처리 -> 넘긴다
	double result1 = make_avg(10, 11, 13);
	double result2 = make_avg(11, 17, 99);
	printf("두 평균의 합 : %.2f\n", result1+result2);
	return 0;
}