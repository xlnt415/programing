#include <stdio.h>

int main(void) {
	// C언어 코드 작성시의 큰 그림
	
	// 1. 필요한 변수를 미리 선언한다.
	//  - 이때 필요한 값이 있으면 초기화도 한다.
	int num1;
	int num2;
	double fnum1;
	double fnum2;
	// 2. 입력이 필요하면 그 후 입력을 받는다.
	printf("-- 입력구간 --\n");
	printf("첫번째 정수 입력 >> ");
	scanf_s("%d", &num1);
	printf("두번째 정수 입력 >> ");
	scanf_s("%d", &num2);
	printf("첫번째 실수 입력 >> ");
	scanf_s("%lf", &fnum1);
	printf("두번째 실수 입력 >> ");
	scanf_s("%lf", &fnum2);
	// 3. 입력이 다 끝나면 이를 이용하여 연산(처리)한다.
	//    이 때 연산은 연산자 사용법을 준수한다.

	// 4. 다 된 결과물을 출력한다.
	printf("-- 출력구간 --\n");
	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%.2f * %.2f = %.2f\n", fnum1, fnum2, fnum1 * fnum2);
	return 0;
}