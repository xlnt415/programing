#include <stdio.h>

void program1(void) {
	// 배열 미적용시
	int n1 = 10;
	int n2 = 20;
	int n3 = 30;
	double f1 = 1.1;
	double f2 = 2.2;
	double f3 = 3.3;
	printf("%d + %.1f : %.1f\n", n1, f2, n1 + f2);
	printf("%d - %.1f : %.1f\n", n2, f3, n2 - f3);
	printf("%d * %.1f : %.1f\n", n3, f1, n3 * f1);
	printf("%d / %.1f : %.1f\n", n1, f2, n1 / f2);
}

int main(void) {
	// program1();

	// 배열 적용시
	// - 별 다른 이점이 없어서, 이런 식으로 운용할 경우 배열을 안쓴다.
	int arr1[3]; arr1[0] = 10; arr1[1] = 20; arr1[2] = 30;
	double arr2[3] = { 1.1,2.2,3.3 };
	printf("%d + %.1f : %.1f\n", arr1[0], arr2[1], arr1[0] + arr2[1]);
	printf("%d - %.1f : %.1f\n", arr1[1], arr2[2], arr1[1] - arr2[2]);
	printf("%d * %.1f : %.1f\n", arr1[2], arr2[0], arr1[2] * arr2[0]);
	printf("%d / %.1f : %.1f\n", arr1[0], arr2[1], arr1[0] / arr2[1]);
	return 0;
}