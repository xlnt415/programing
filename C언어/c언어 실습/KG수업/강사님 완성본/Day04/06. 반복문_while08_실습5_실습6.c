#include <stdio.h>

int main(void) {
	// 실습5. 범위는 각각에 맞춰 바뀌도록 할 필요 없음
	//       만들었을 때, 상수는 중복처리대상 외이다.
	int num = 0; int num1;
	while (num <= 0) {
		printf("출력할 배수 입력 >> ");
		scanf_s("%d", &num);
	}
	num1 = num;
	while (num1 <= 30) {
		printf("%d ", num1);
		num1 += num;
	} printf("\n");
	// 실습6. 조건문 쓸 수 있다.
	int limit;
	int num2 = 1;
	printf("범위 입력 >> ");
	scanf_s("%d", &limit);
	if (limit < 1) printf("안보여줍니다.\n");
	else {
		while (num2 <= limit) {
			printf("%d ", num2);
			num2++;
		}
	}
	
	return 0;
}