#include <stdio.h>

int main(void) {
	// break : 반복을 중간에 종료
	// -> 조건식에서 처리가 되면 조건식에서 처리한다.
	// -> 불필요한 내용이 처리가 안되도록 하는 것.
	int num;
	while (1) {
		printf("10보다 큰 값 입력 >> ");
		scanf_s("%d", &num);
		if (num <= 10) break; // 조건문과 연계해야 한다.
		printf("10이하의 값이어야 합니다.\n");
	}
	// while의 조건식에서 끝내는 것이 가장 간결하다.
	num = 11;
	while (num>10) {
		printf("10보다 큰 값 입력 >> ");
		scanf_s("%d", &num);
		if (num > 10) printf("10이하의 값이어야 합니다.\n");
	}
	printf("결과 : %d\n", num);
	// continue : 반복을 중간에 재시작(다음단계로 이동)
	// - 조건문과 사용해야 한다.
	// - 사용해봤자 큰 의미가 없음
	while (num > 10) {
		printf("10보다 큰 값 입력 >> ");
		scanf_s("%d", &num);
		if (num > 10) {
			printf("10이하의 값이어야 합니다.\n");
			continue;
		}
	}
	printf("결과 : %d\n", num);
	return 0;
}