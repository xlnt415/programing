#include <stdio.h>

int main(void) {
	// 조건1
	// 반복을 이용한 합 구하기 : 통에 담아 보관하기
	// 숫자라면, 그 값을 저장시켜도, 유지시켜주는 값이 있다.
	// -> 0이다!
	int result = 0;
	int num = 1;
	// -> 하나의 논리를 만들어 자동으로 처리가 되도록 만드는 것
	while (num <= 10) {
		result += num;
		num += 1;
	}
	printf("%d\n", result);
	// 조건2. 위의 코드에서 무엇이 변하면 특정 배수의 합을 구할 수 있을까?
	// 팁 : 입력은 나중에 추가하고, 무엇이 변하면 어떻게 반영되는지 파악해야 합니다.
	int result1 = 0;
	int value;
	int num1;
	printf("합을 구할 배수 입력 >> ");
	scanf_s("%d", &value);
	num1 = value;
	while (num1 <= 10) {
		// 반복은 핵심코드를 잡아내는 것
		result1 += num1;
		// 이걸 고치면, 원하는 동작을 하도록 수정할 수 있다.
		num1 += value;
	}
	printf("1부터 10까지의 정수중 %d의 배수의 합 : %d\n", value, result1);
	return 0;
}