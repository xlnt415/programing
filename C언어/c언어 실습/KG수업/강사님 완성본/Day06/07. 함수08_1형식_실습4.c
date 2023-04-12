#include <stdio.h>

int function1(int num1, int num2) {
	// 잘못된 연산이 될 때 나오는 값으로 0을 넣어두면 무난하다.
	if (num2 == 0) return 0;
	else return num1 / num2;
}
int function2(int num1, int num2) {
	int result;
	// 나눔을 당하는 수가 0이거나, 나누는 수가 0이면 전부 퉁쳐서 0으로 보낸다.
	if (num1 == 0 || num2 == 0) result = 0;
	else if (num1 > num2) result = num1 / num2;
	else result = num2 / num1;
	return result;
}
int function3(int num1, int num2) {
	// 이런 단순한 내용은, 함수로 만들지 않는다.
	return num1 + num2;
	// 만들어서 얻는 이점이 없고, 코드만 더 복잡해진다.
}
int function4(int limit) {
	// 함수는 결국 반복되는 코드를 처리하는 것
	// -> return 명령어는 반복문의 break처럼 활용된다.
	if (limit == 1) return 1;
	else {
		int result = 0;
		if (limit > 1) {
			for (int i = 1; i <= limit; i++) {
				result += i;
			}
		}
		else {
			for (int i = 1; i >= limit; i--) {
				result += i;
			}
		}
		return result;
	}
}

int main(void) {
	// 실습4-1 : 두 정수의 몫연산결과를 만드는 함수를 정의하세요.
	printf("두 정수의 몫연산 결과 : %d\n", function1(10, 3)); // 3
	printf("두 정수의 몫연산 결과 : %d\n", function1(3, 10)); // 0

	// 실습4-2 : 두 정수중 더 큰 수에 대하여 더 작은 수로 나눈 몫을
	//           만드는 함수를 정의하세요.
	printf("더 큰 수에 대한 몫연산 결과 : %d\n", function2(10, 3)); // 3
	printf("더 큰 수에 대한 몫연산 결과 : %d\n", function2(3, 10)); // 3

	// 실습4-3 : 두 정수의 합을 만드는 함수를 정의하세요.
	printf("두 정수의 합연산 결과 : %d\n", function3(10, 3)); // 13
	printf("두 정수의 합연산 결과 : %d\n", function3(3, 10)); // 13

	// 실습4-4 : 1부터 임의의 정수까지의 합을 만드는 함수를 정의하세요.
	printf("10까지의 합 : %d\n", function4(10)); // 55
	printf("-5까지의 합 : %d\n", function4(-5)); // -14

	return 0;
}