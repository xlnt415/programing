#include <stdio.h>

int main(void) {
	int num1;
	int num2;
	double fnum1;
	double fnum2;

	printf("ù��° ���� �Է� : ");
	scanf_s("%d", &num1);
	printf("�ι�° ���� �Է� : ");
	scanf_s("%d", &num2);
	
	int plus_result;
	plus_result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, plus_result);

	printf("ù��° ���� �Է� : ");
	scanf_s("%d", &num1);
	printf("�ι�° ���� �Է� : ");
	scanf_s("%d", &num2);

	int mul_result;
	mul_result = num1 * num2;
	printf("%d * %d = %d\n", num1, num2, mul_result);
	

	printf("ù��° �Ǽ� �Է� : ");
	scanf_s("%lf", &fnum1);
	printf("�ι�° �Ǽ� �Է� : ");
	scanf_s("%lf", &fnum2);

	double plus_fresult;
	plus_fresult = fnum1 + fnum2;
	printf("%lf + %lf = %.2lf\n", fnum1, fnum2, plus_fresult);

	printf("ù��° �Ǽ� �Է� : ");
	scanf_s("%lf", &fnum1);
	printf("�ι�° �Ǽ� �Է� : ");
	scanf_s("%lf", &fnum2);

	double mul_fresult;
	mul_fresult = fnum1 + fnum2;
	printf("%lf + %lf = %.2lf\n", fnum1, fnum2, mul_fresult);
	
	return 0;
}