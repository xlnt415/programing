#include <stdio.h>

int main(void) {
	int num1;
	int num2;
	double fnum1;
	double fnum2;

	printf("첫번째 정수 입력 : ");
	scanf_s("%d", &num1);
	printf("두번째 정수 입력 : ");
	scanf_s("%d", &num2);
	
	int plus_result;
	plus_result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, plus_result);

	printf("첫번째 정수 입력 : ");
	scanf_s("%d", &num1);
	printf("두번째 정수 입력 : ");
	scanf_s("%d", &num2);

	int mul_result;
	mul_result = num1 * num2;
	printf("%d * %d = %d\n", num1, num2, mul_result);
	

	printf("첫번째 실수 입력 : ");
	scanf_s("%lf", &fnum1);
	printf("두번째 실수 입력 : ");
	scanf_s("%lf", &fnum2);

	double plus_fresult;
	plus_fresult = fnum1 + fnum2;
	printf("%lf + %lf = %.2lf\n", fnum1, fnum2, plus_fresult);

	printf("첫번째 실수 입력 : ");
	scanf_s("%lf", &fnum1);
	printf("두번째 실수 입력 : ");
	scanf_s("%lf", &fnum2);

	double mul_fresult;
	mul_fresult = fnum1 + fnum2;
	printf("%lf + %lf = %.2lf\n", fnum1, fnum2, mul_fresult);
	
	return 0;
}