#include <stdio.h>

int main(void) {
	// 관계 : 크기만 비교가능
	int num1 = 5;
	int num2 = 5;
	// 연산결과는 정수값 1(참) / 정수값 0(거짓)
	printf("%d < %d : %d\n", num1, num2, num1 < num2);
	printf("%d > %d : %d\n", num1, num2, num1 > num2);
	printf("%d <= %d : %d\n", num1, num2, num1 <= num2);
	printf("%d >= %d : %d\n", num1, num2, num1 >= num2);
	printf("%d == %d : %d\n", num1, num2, num1 == num2);
	printf("%d != %d : %d\n", num1, num2, num1 != num2);
	// 주의 : 2개이상 연속으로 쓰지 말 것
	// C언어의 연산은 2개씩 우선순위가 없는 이상, 왼쪽부터 처리하며 연산한다.
	printf("결과1 : %d\n", 2 < 3 < 4); // 1(2<3) < 4 -> 1(1<4)
	printf("비교1 : %d\n", 4 > 3 > 2); // 1(4>3) > 2 -> 0(1>2)

	// 2개 이상 할려면 분리하고, 이를 논리연산으로 묶는다.
	// 논리곱 : 조건식들을 만족하는 유일한 하나를 볼 때 사용한다.
	// ex) 삼성제품이면서, 15인치, RAM 16GB인 모델을 찾는다.
	int x = 2;
	printf("논리곱1 : %d\n", 2 < x && x < 4);
	printf("논리곱2 : %d\n", 4 > x && x > 2);
	// 논리합 : 적어도 하나 이상의 조건식을 만족하는 것들을 볼 때 사용한다.
	// ex) 화면크기가 13인치, 14인치, 15인치인 노트북을 찾는다.
	printf("논리합 : %d\n", x > 1 || x > 2);
	// 부정 : 조건식을 그대로 이용하고자할 때 사용한다.
	int result = 4 > x && x > 2; // 부정 : 4 <= x || x <= 2
	printf("조건식의 연산결과1 : %d\n", result);
	printf("조건식의 연산결과2 : %d\n", !result);
	return 0;
}