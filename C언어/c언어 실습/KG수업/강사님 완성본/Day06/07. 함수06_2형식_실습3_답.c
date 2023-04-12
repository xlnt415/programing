#include <stdio.h>
// 4형식 : 독립된 프로그램. 간섭불가.
void program(void) {
	int num1; int num2;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	printf("결과 : %d %d %.2f\n", num1 / num2, num1 % num2, num1 / (double)num2);
}
// 3형식 : 결과값을 외부로 돌려주는 함수.
int make_result(void) {
	int num1; int num2;
	printf("정수 2개 입력 >> ");
	scanf_s("%d%d", &num1, &num2);
	// 함수는 return을 하나만 할 수 있다. 여러개 못함.
	return num1 / num2;
	// 다른 결과가 필요하면, 함수를 3개 준비해서 써야 함....
}
// 2형식 : 값을 외부로부터 받아와서 출력하는 함수
void show_result(int num1, int num2) {
	if (num2 == 0) printf("나올 수 없습니다.\n");
	else  printf("결과 : %d %d %.2f\n",
		num1 / num2, num1 % num2, num1 / (double)num2);
}

int main(void) {
	program();
	printf("받아온 못 연산 결과 : %d\n", make_result());
	show_result(10, 0);
	return 0;
}