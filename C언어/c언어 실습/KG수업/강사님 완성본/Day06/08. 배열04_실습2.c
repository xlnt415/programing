#include <stdio.h>

int main(void) {
	// 배열의 크기는 반드시 상수로 설정된다.
	double arr[5]; // 같이 초기화할 경우, 값의 수량을 점검한다.
	int size = sizeof(arr) / sizeof(double);
	printf("배열의 크기 : %d\n", size);
	printf("배열의 실제크기 : %d Bytes\n", sizeof(arr));
	printf("배열의 자료형 크기 : %d Bytes\n", sizeof(double));
	arr[1] = 1.1;
	arr[2] = 2.2;
	arr[3] = 3.3;
	printf("첫번째와 마지막 값 입력 >> ");
	scanf_s("%lf%lf", &arr[0], &arr[4]);
	// 인덱스의 사용 통제를 위해 반드시 해줘야 한다.
	for (int i = 0; i < size; i++) {
		printf("arr[%d] : %.1f\n", i, arr[i]);
	}
	return 0;
}