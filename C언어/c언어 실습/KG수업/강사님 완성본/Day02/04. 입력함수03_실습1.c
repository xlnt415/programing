#include <stdio.h>

int main(void) {
	// C��� �ڵ� �ۼ����� ū �׸�
	
	// 1. �ʿ��� ������ �̸� �����Ѵ�.
	//  - �̶� �ʿ��� ���� ������ �ʱ�ȭ�� �Ѵ�.
	int num1;
	int num2;
	double fnum1;
	double fnum2;
	// 2. �Է��� �ʿ��ϸ� �� �� �Է��� �޴´�.
	printf("-- �Է±��� --\n");
	printf("ù��° ���� �Է� >> ");
	scanf_s("%d", &num1);
	printf("�ι�° ���� �Է� >> ");
	scanf_s("%d", &num2);
	printf("ù��° �Ǽ� �Է� >> ");
	scanf_s("%lf", &fnum1);
	printf("�ι�° �Ǽ� �Է� >> ");
	scanf_s("%lf", &fnum2);
	// 3. �Է��� �� ������ �̸� �̿��Ͽ� ����(ó��)�Ѵ�.
	//    �� �� ������ ������ ������ �ؼ��Ѵ�.

	// 4. �� �� ������� ����Ѵ�.
	printf("-- ��±��� --\n");
	printf("%d + %d = %d\n", num1, num2, num1+num2);
	printf("%.2f * %.2f = %.2f\n", fnum1, fnum2, fnum1 * fnum2);
	return 0;
}