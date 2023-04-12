#include <stdio.h>
// 절차식 프로그래밍 : 절차를 올바르게 밟아라.

// 프로그램 : 자료 -> 처리 -> 정보
// 자료는 어떻게 준비할 것인가? - 상수/입력
// 준비한 자료는 어디에 보관할 것인가? - 변수
// 자료의 종류는 무엇인가? - 문자(단일/문자열) / 숫자(정수/실수)

// 어떤 처리를 할 것인가?
// 처리과정을 저장해서 쓸 것인가?
// -> 연산자에 의해서만 처리가 된다...

// 결과물을 출력할 것인가? printf
// 다른 곳으로 전달할 것인가? 전달을 위한 명령어를 이용한다.

int main(void) {
	// 숙제1. 실습문제 2번을 해결하세요.
	/*
	char name[100];
	int age;
	char dream[100];
	char blood[100];
	printf("이름 입력\t>> ");
	scanf_s("%s", name, 100);
	printf("나이 입력\t>> ");
	scanf_s("%d", &age);
	printf("혈액형 입력\t>> ");
	scanf_s("%s", blood, 100);
	printf("꿈 입력\t\t>> ");
	scanf_s("%s", dream, 100);
	// gets_s(dream, 100);
	printf("이름\t: %s\n", name);
	printf("나이\t: %d세\n", age);
	printf("혈액형\t: %s형\n", blood);
	printf("꿈\t: %s\n", dream);
	*/
	// 숙제2. 실습문제 3번을 해결하세요.
	//       소수점 4자리까지만 나오도록 합니다.
	int num1; int num2; int num3;
	int sum;
	printf("정수 3개 입력 >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	printf("합 : %d\n", sum);
	printf("평균 : %.4f\n", sum / 3.0);
	// 숙제3. 실습문제 3번에서 나오는
	//    평균값에서, 정수부와 실수부를 분리하여
	//    따로따로 출력하세요.
	//    실수부는 소수점 6자리까지 나오도록 합니다.
	double avg = sum / 3.0;
	printf("정수부 : %d\n", (int)avg);
	printf("실수부 : %f\n", avg - (int)avg);
	// 숙제4. 숙제 3번에서 출력한 정수부와 실수부의 곱을
	//       적절한 자료형의 변수에 저장하여 출력하고
	//       곱연산 결과는 소수점 8자리까지 나오도록 합니다.
	double result = (int)avg * (avg - (int)avg);
	printf("정수부와 실수부의 곱 : %.8f\n", result);
	return 0;
}