#include <stdio.h>

int main(void) {
	int num;
	printf("자릿수 판별기\n정수 입력 >> ");
	scanf_s("%d", &num);
	// 주의사항 : 관계연산자 연속사용은 안됩니다.
	//           정상처리가 안됩니다.
	if (num < 0) {
		num *= -1;
	}
	// 조건식을 덜 쓰기 위한 것이 주 목적이다.
	// 단순히 선택지를 늘리기 위한 것이 아님.
	if (num < 10) {
		printf("한자리 수입니다.\n");
	}
	else if (num < 100) { // num>=10 && num <100
		printf("두자리 수입니다.\n");
	}
	else {
		printf("세자리 수입니다.\n");
	}
	// 응용 : 몫연산을 이용한다.
	if (num / 10 == 0) {
		printf("한자리 수입니다.\n");
	}
	else if (num / 100 == 0) {
		printf("두자리 수입니다.\n");
	}
	else {
		printf("세자리 이상입니다.\n");
	}
	return 0;
}