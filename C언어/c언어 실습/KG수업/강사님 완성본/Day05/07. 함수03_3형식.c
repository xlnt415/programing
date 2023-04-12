#include <stdio.h>
// 독립된 하나의 프로그램을 만들어 관리
// - 하나의 소스파일에 여러 프로그램을 운용할 수 있다.
void program1(void) {
	int num1; int num2; int num3;
	double avg;
	// 변수는 선언된 곳에 종속된다. 가져올 수 없음.
	// -> 값은 복사할 수 있다!
	printf("3개의 정수 입력 >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	printf("평균 : %.2f\n", (num1 + (double)num2 + num3) / 3);
}
// 함수의 반환형 : 함수 내부에 있는 값을 외부로 복사할 수 있도록 해줌
// return 명령어 : 함수 내부에 있는 값들 중 하나를 지정해서 돌려주는 명령어
//                함수를 종료시키게 된다.
double get_avg(void) {
	// 3형식부터는 함수명을 동사로 표현하는게 좋다.
	int num1; int num2; int num3;
	double avg;
	// 변수는 선언된 곳에 종속된다. 가져올 수 없음.
	// -> 값은 복사할 수 있다!
	printf("3개의 정수 입력 >> ");
	scanf_s("%d%d%d", &num1, &num2, &num3);
	avg = (num1 + (double)num2 + num3) / 3;
	// printf("평균 : %.2f\n", avg); 중첩되는 동작이 되어 제외해야 한다.
	return avg; // 값을 외부로 복사한다
}
// 3형식 : 함수 외부로 값을 돌려주는 함수
// 필요한 값의 준비까지만 해주고, 값의 이용은 외부에 넘기는 함수

int main(void) {
	/*
	// 4형식의 문제 : 간섭할 수 없고, 받을 수도 없다.
	// 함수 내부에서 만들어진 값에 접근할 수 없다.
	program1();
	// printf("%.2f\n", avg);
	*/
	double result = get_avg();
	printf("변수에 저장된 평균 : %.2f\n", result);
	printf("저장하지 않고 출력 : %.2f\n", get_avg());
	return 0;
}